#!/bin/bash

gcc -I../include/pal objects.c streams.c process.c -shared -o libpal.so -fPIC
