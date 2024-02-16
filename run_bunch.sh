#!/bin/bash

script="$1"
echo "" > "$script".time
for ((N=1; N<=1; N++))
do
    ./gen
    echo "$N:" >> "$script".time
    for ((i=1; i<=10; i++))
    do
        { \time -f "%e" bash "$script" "$N" ; } 2>> "$script".time
    done
done
