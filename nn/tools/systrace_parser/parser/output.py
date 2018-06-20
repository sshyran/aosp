from parser.aggregate import aggregate_times
from parser.naming import layers, names
from parser.naming import LAYER_APPLICATION
from parser.naming import (PHASE_INITIALIZATION, PHASE_PREPARATION, PHASE_COMPILATION,
                           PHASE_INPUTS_AND_OUTPUTS, PHASE_EXECUTION, PHASE_RESULTS,
                           PHASE_TERMINATION, PHASE_OVERALL)

def print_stats(tracker_map, print_detail=True, total_times=True):
  NONE = "NONE"
  phases_to_print = [PHASE_INITIALIZATION, PHASE_PREPARATION, PHASE_COMPILATION,
                     PHASE_INPUTS_AND_OUTPUTS, PHASE_EXECUTION, PHASE_RESULTS,
                     PHASE_TERMINATION]
  phases_top = [PHASE_INITIALIZATION, PHASE_PREPARATION, PHASE_COMPILATION,
                NONE, PHASE_EXECUTION, PHASE_RESULTS, PHASE_TERMINATION]
  phases_bottom = [NONE, NONE, NONE, PHASE_INPUTS_AND_OUTPUTS,
                   NONE, NONE, NONE]
  times, self_times = aggregate_times(tracker_map)
  print('')
  print("*" * ((len(phases_to_print) + 2) * 14))
  print("NNAPI timing summary (self-times, ms)")
  print("{0:<14}{1:>14}{2:>14}{3:>14}{4:>14}{5:>14}{6:>14}{7:>14}{8:>14}".format('',
                                                            *[names[p] for p in phases_top],
                                                            'Total'))
  print("{0:<14}{2:>14}{1:>14}{1:>14}{1:>14}{2:>14}{1:>14}{1:>14}{1:>14}".format(
      '', '-' * 11, '-' * 14))
  phase_totals = {}
  for layer in layers + ["total"]:
    if layer == "total":
      print('')
    print("{0:<14}".format(names[layer]), end='')
    total = 0.0
    for phase in phases_to_print:
      if total_times:
        t = times.get(layer, {}).get(phase, 0.0)
      else:
        t = self_times[layer][phase]
      if phase == PHASE_EXECUTION:
        # We show these subphases broken out
        t = t - self_times[layer][PHASE_INPUTS_AND_OUTPUTS]
        t = t - self_times[layer][PHASE_RESULTS]
      total += t
      if layer == LAYER_APPLICATION and phase == PHASE_INPUTS_AND_OUTPUTS:
        print("{0:>14}".format("I/O"), end='')
      else:
        if t == 0.0:
          print("{0:>14}".format("-"), end='')
        else:
          print("{0:>14.2f}".format(t), end='')
    print("{0:>14.2f}".format(total), end='')
    print('')
  print("*" * ((len(phases_to_print) + 2) * 14))
  print("Layer application, Phase Overall total {0:.2f}".format(
      times[LAYER_APPLICATION][PHASE_OVERALL]))
  print('')
  if print_detail:
    for pid in tracker_map:
      tracker = tracker_map[pid]
      tracker.print_stats()
    for pid in tracker_map:
      tracker = tracker_map[pid]
      tracker.print()

def reset_trackers(tracker_map):
  for pid in tracker_map:
    tracker = tracker_map[pid]
    tracker.reset()
