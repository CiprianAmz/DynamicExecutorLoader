#!/usr/bin/env bash

mkdir out
cp -r ../ExecutorLib/lib/ out/lib
mkdir out/bin

g++ -std=c++17 -I out/lib/ -c main.cpp -o out/bin/main.o
g++ -std=c++17 -o out/bin/main out/bin/main.o -L ../ExecutorLib/out/bin/. -lexecutor
