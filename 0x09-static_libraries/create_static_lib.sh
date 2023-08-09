#!/bin/bash
gcc -Wall -pedantic -Warrior -Wextra -o *.c
ar -rc liball.a *.o
ranlib liball.a
