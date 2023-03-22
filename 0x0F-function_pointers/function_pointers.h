#ifndef HEADER_NAME_H
#define HEADER_NAME_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* HEADER_NAME_H */
