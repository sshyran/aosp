#!/usr/bin/python3

""" Parse a systrace file with NNAPI traces to calculate timing statistics

This is script to be run from the command line.

Usage:
  $ cd <location of script>
  $ ./parse_systrace.py [--print-detail] <systrace html file>

For the parsing logic, see contract-between-code-and-parser.txt

TODO: output flags
- self times vs totals
- json vs txt

"""

import argparse
import sys

from parser.input import get_trace_part, parse_trace_part
from parser.output import print_stats, reset_trackers
from parser.tracker import Tracker


def produce_stats(trace, print_detail=False):
  """ Take a string with the systrace html file's trace part,
      possibly containing multiple application runs, feed the trace to
      Tracker objects and print stats for each run."""
  tracked_pids, driver_tgids, parsed = parse_trace_part(trace)
  tracker_map = {}
  for pid in tracked_pids:
    tgid = tracked_pids[pid]
    tracker_map[pid] = Tracker(pid, driver_tgids.get(tgid, False))

  first = True
  for [task, pid, tgid, time, mark, line, lineno] in parsed:
    if ("HIDL::IDevice" in mark) or ("[NN_" in mark):
        assert tracker_map.get(pid)
    if tracker_map.get(pid):
        if "[NN_LA_PO]" in mark:
          # Next run
          if not first:
            print_stats(tracker_map, print_detail, False)
            reset_trackers(tracker_map)
          print(mark)
          first = False
        try:
          tracker_map[pid].handle_mark(time, mark)
        except Exception as e:
          print("failed on line", lineno, line)
          raise
  print_stats(tracker_map, print_detail, False)

if __name__ == "__main__":
  parser = argparse.ArgumentParser()
  parser.add_argument('--print-detail', action='store_true')
  parser.add_argument('filename')
  args = parser.parse_args()
  trace = get_trace_part(args.filename)
  produce_stats(trace, args.print_detail)
