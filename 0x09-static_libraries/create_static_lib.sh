#!/bin/bash
for file in *.c
do
    obj=${file%.*}.o
    gcc -c $file -o $obj
done

for file in *.o
do
    ar rc liball.a $file
done