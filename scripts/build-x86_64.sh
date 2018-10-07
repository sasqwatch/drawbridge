#!/bin/bash

mkdir -p build/x86_64
gcc -I./pal/include/pal ./pal/micropal/objects.c ./pal/micropal/streams.c ./pal/micropal/process.c -shared -o build/x86_64/libpal.so -fPIC $CFLAGS
