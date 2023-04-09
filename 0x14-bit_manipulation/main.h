#ifndef NAME_H
#define NAME_H

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);

#endif /* NAME_H */
