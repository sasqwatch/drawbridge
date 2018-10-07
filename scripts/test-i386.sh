#!/bin/bash

gcc -m32 -nostdlib -Wall -fPIC -I./pal/include/pal -Lbuild/i386 ./pal/startup/i386/user_start.S -lpal ./pal/test/hello.c -o ./build/i386/hello $CFLAGS
