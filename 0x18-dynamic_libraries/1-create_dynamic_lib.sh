#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -shared -o liball.so *-o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH  
