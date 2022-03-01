#!/bin/bash
gcc -Wal -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
