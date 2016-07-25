#!/usr/bin/env bash

mkdir -p src/gen
vultc -ccode -real fixed -template teensy -o src/VultGen src/phasedist.vult
make
