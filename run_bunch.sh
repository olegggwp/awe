#!/bin/bash

script="$1"
for ((N=1; N<=20; N++))
do
    echo "$N:" >> "$script".time
    for ((i=1; i<=10; i++))
    do
        { \time -f "%e" bash "$script" "$N" ; } 2>> "$script".time
    done
done
