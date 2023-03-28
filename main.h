#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
void _strrev(char *str);
char *my_itoa(long int i, char *strout, int base);
int print_int(int arg, char *tmp);
int print_binary(long int arg, char *tmp);
int printstr(char *str);
int _printf(const char *format, ...);

#endif /* ifndef MAIN_H*/
