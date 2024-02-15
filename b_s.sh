#!/bin/bash

N=$1
for ((i=0; i<N; i++))
do
    ./main $i "3000000"
done
# echo "Done"