#!/bin/bash
gcc -Wall -wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
