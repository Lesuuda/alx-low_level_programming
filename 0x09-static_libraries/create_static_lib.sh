#!/bin/bash
gcc -Wall _pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
