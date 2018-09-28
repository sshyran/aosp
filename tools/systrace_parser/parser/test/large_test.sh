#!/bin/bash
#
set -e
cd $(dirname $(realpath $0))
../../parse_systrace.py hdrnet.html > hdrnet.tmp
../../parse_systrace.py cpu.html > cpu.tmp
../../parse_systrace.py unittest.html > unittest.tmp
../../parse_systrace.py --per-execution hdrnet.html > hdrnet-bm.tmp
../../parse_systrace.py --per-execution --json omr1_incomplete.html > omr1_incomplete.tmp
../../parse_systrace.py omr1.html > omr1.tmp
../../parse_systrace.py old.html > old.tmp

echo hdrnet
diff hdrnet.txt hdrnet.tmp
echo cpu
diff cpu.txt cpu.tmp
echo unittest
diff unittest.txt unittest.tmp
echo benchmark
diff hdrnet-bm.txt hdrnet-bm.tmp
echo omr1_incomplete
diff omr1_incomplete.json omr1_incomplete.tmp
echo omr1
diff omr1.txt omr1.tmp
echo old
diff old.txt old.tmp

echo Success
