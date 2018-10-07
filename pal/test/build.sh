#!/bin/bash

gcc -nostdlib -Wall -fPIC -I../include/pal -L../prebuilt/fedora-x86_64 ../prebuilt/fedora-x86_64/user_start.o -lpal hello.c -o hello
