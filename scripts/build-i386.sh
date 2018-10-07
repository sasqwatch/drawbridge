#!/bin/bash

mkdir -p build/i386
gcc -m32 -I./pal/include/pal ./pal/micropal/objects.c ./pal/micropal/streams.c ./pal/micropal/process.c -shared -o build/i386/libpal.so -fPIC $CFLAGS
