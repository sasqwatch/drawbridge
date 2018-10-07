#!/bin/bash

gcc -nostdlib -Wall -fPIC -I./pal/include/pal -Lbuild/x86_64 ./pal/startup/x86_64/user_start.S -lpal ./pal/test/hello.c -o ./build/x86_64/hello $CFLAGS
