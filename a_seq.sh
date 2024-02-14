#!/bin/bash

N=$1
a=8000
b=8000
for ((i=1; i<=N; i++))
do
    a=$(($a + 1))
    b=$(($b - 1))
    ./a $a $b
done
# echo "Done"