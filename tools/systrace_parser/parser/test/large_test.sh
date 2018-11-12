#!/bin/bash
#
set -e
cd $(dirname $(realpath $0))

set +e
if (../../parse_systrace.py no_nnapi_trace.html || true) 2>&1 | \
  grep "No NNAPI Runtime trace present" > /dev/null
then
  true
else
  echo failed
  exit 1
fi
set -e

echo parsing hdrnet
../../parse_systrace.py hdrnet.html > hdrnet.tmp
echo parsing cpu
../../parse_systrace.py cpu.html > cpu.tmp
echo parsing unittest
../../parse_systrace.py unittest.html > unittest.tmp
echo parsing hdrnet --per-execution
../../parse_systrace.py --per-execution hdrnet.html > hdrnet-bm.tmp
echo parsing omr1_incomplete
../../parse_systrace.py --per-execution --json omr1_incomplete.html > omr1_incomplete.tmp 2>/dev/null
echo parsing omr1
../../parse_systrace.py omr1.html > omr1.tmp 2>/dev/null
echo parsing old
../../parse_systrace.py old.html > old.tmp

echo checking hdrnet
diff hdrnet.txt hdrnet.tmp
echo checking cpu
diff cpu.txt cpu.tmp
echo checking unittest
diff unittest.txt unittest.tmp
echo checking benchmark
diff hdrnet-bm.txt hdrnet-bm.tmp
echo checking omr1_incomplete
diff omr1_incomplete.json omr1_incomplete.tmp
echo checking omr1
diff omr1.txt omr1.tmp
echo checking old
diff old.txt old.tmp

echo Success
