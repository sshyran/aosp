""" NNAPI sytrace parser - aggegation of timing from multiple threads """

from parser.naming import layers, phases, subphases
from parser.naming import PHASE_OVERALL, PHASE_TERMINATION

def aggregate_times(tracker_map, special_case_lr_pe=True):
  times = {}
  self_times = {}
  for layer in layers:
    times[layer] = {}
    self_times[layer] = {}
    for phase0 in [PHASE_OVERALL] + phases:
      for phase in ([phase0] + subphases.get(phase0, [])):
        t = 0.0
        tag = layer + "_" + phase
        for pid in tracker_map:
          t = t + tracker_map[pid].get_stat(tag, special_case_lr_pe)
        times[layer][phase] = t

  self_times["total"] = {}
  for phase0 in [PHASE_OVERALL] + phases:
    for phase in ([phase0] + subphases.get(phase0, [])):
      t = 0.0
      self_times["total"][phase] = 0.0
      for layer in reversed(layers):
        if times[layer][phase] == 0.0:
          self_times[layer][phase] = 0.0
        else:
          self_times[layer][phase] = times[layer][phase] - t
          t = times[layer][phase]
        self_times["total"][phase] += self_times[layer][phase]

  return (times, self_times)
