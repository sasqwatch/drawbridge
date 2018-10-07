#!/bin/bash

mkdir -p build
gcc -m32 -I./pal/include/pal ./pal/micropal/objects.c ./pal/micropal/streams.c ./pal/micropal/process.c -shared -o build/libpal.so -fPIC $CFLAGS
