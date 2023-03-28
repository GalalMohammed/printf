#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

#define LOWER 0
#define UPPER 1

int _putchar(char c);
void _strrev(char *str);
char *my_itoa(long int i, char *strout, int base);
int print_int(int arg, char *tmp);
int print_binary(long int arg, char *tmp);
int printstr(char *str);
int _printf(const char *format, ...);
int print_unsignedInt(unsigned int arg, char *tmp);
int print_octal(unsigned int arg, char *tmp);
int print_hex(unsigned int arg, char *tmp, char to_upper_flag);
char *toUpper(char *str);

#endif /* ifndef MAIN_H*/
