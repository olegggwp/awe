#!/bin/bash

script="$1"
for ((N=1; N<=2; N++))
do
    echo "$N:" >> "$script".time
    for ((i=1; i<=2; i++))
    do
        { \time -f "%e" bash "$script" "$N" ; } 2>> "$script".time
    done
done
