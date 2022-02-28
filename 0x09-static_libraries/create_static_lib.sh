#!/bin/bash
gcc -Wall -Weeoe -Wextra -pedantic -c *.c
ar -rc liball.a *.o
