#!/bin/bash

gcc -fpic -c *.c
gcc -shared *.c -o liball.c
