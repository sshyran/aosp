import unittest

from parser.input import MATCHER

class TestInput(unittest.TestCase):
  def check_match(self, line):
    m = MATCHER.match(line)
    self.assertTrue(m, "'" + line + "'")

  def test_thread_names(self):
    lines = """
      NeuralNetworks-5143  ( 5143) [005] ...1   142.924145: tracing_mark_write: B|5143|[NN_L
    <...>-5149 ( 774) [000] ...1   143.103773: tracing_mark_write: B|774|[NN_LDV_PC][validat
    <...>-756 ( 756) [000] ...1   143.140553: tracing_mark_write: B|756|HIDL::IDevice::prepa
    <...>-5149  (-----) [001] ...1   143.149856: tracing_mark_write: B|756|[NN_LCC_PE][optim
      HwBinder:784_1-5236  (  784) [001] ...1   397.528915: tracing_mark_write: B|784|HIDL::
      GLThread 35-1739  ( 1500) [001] ...1   277.001798: tracing_mark_write: B|1500|HIDL::IMapper::importBuffer::passthrough")
      allocator@1.0-s-757   (  757) [005] ...1  1700.939402: tracing_mark_write: E|757
    """
    for line in lines.splitlines():
      line = line.strip()
      if line:
        self.check_match(line)

