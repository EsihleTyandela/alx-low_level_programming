#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_endainness(void);
void print_binary(unsigned long int n);
