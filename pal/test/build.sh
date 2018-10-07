#!/bin/bash

clang -nostdlib -Wall -fPIC -I../include/pal -L../prebuilt/fedora ../prebuilt/fedora/user_start.o -lpal hello.c -o hello
