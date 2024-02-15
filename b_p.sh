#!/bin/bash
N=$1
./gen
for ((i = 0; i < N; i++)); do
    ./main $i "3000000" &
done
wait