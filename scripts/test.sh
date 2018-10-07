#!/bin/bash

gcc -nostdlib -Wall -fPIC -I./pal/include/pal -Lbuild ./pal/startup/x86_64/user_start.S -lpal ./pal/test/hello.c -o ./build/hello $CFLAGS
