#!/bin/bash

set -e
echo Running python unittests
python3 -m unittest discover parser/test
echo Running large tests
./parser/test/large_test.sh
