#!/bin/bash
N=$1
for ((i = 0; i < N; i++)); do
    ./main $i "2000000" &
done
wait