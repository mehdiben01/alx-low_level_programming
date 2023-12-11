#!/bin//bash
gcc -Wall -Wextra -Werror -pendantic -c -fPIC -c *.c
gcc -shared *.o -o liball.so *.o
exôrt LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
