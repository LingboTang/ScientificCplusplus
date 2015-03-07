#!/bin/bash

./series 0.25 > series.dat 2> /dev/null
for x in 0.5 0.75 1.0 1.05
do
   echo >> series.dat
   echo >> series.dat
   ./series $x >> series.dat 2> /dev/null
done
