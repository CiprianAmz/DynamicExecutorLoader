#!/usr/bin/env bash

mkdir out
mkdir out/bin

g++ -Wall -fPIC -Ilib -c src/simple_executor.cpp -o out/bin/executor.o
g++ -shared -o out/bin/libexecutor.so out/bin/executor.o
cp -r lib out/lib
