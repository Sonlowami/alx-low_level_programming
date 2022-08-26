#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define INVALID 5
#define IN 1
#define OUT 0
#define MAX_BITS (sizeof(long int) * 8)

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);

int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

int get_endianness(void);

#endif
