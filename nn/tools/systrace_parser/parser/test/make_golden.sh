#!/bin/bash

set -e
cd $(dirname $(realpath $0))
../../parse_systrace.py hdrnet.html > hdrnet.txt
../../parse_systrace.py cpu.html > cpu.txt
../../parse_systrace.py unittest.html > unittest.txt
