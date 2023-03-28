#include <stdio.h>
#include "main.h"
/**
 * handle_char_str_percent - determine which print function to use
 * @format: the character that identifies the type of the variable to print
 * @arg: A list of variadic arguments
 *
 * Return: count
 */

int handle_char_str_percent(char format, va_list arg)
{
	int count = 0;

	switch (format)
	{
	case 'c':
	_putchar(va_arg(arg, int));
	count++;
	break;
	case '%':
	_putchar('%');
	count++;
	break;
	case 's':
	count += printstr(va_arg(arg, char *));
	break;
	}
	return (count);
}

/**
 * numbers_switcher - determine which print function to use to print numbers
 * @format: the character that identifies the type of the variable to print
 * @num: the number
 * @tmp: output string
 *
 * Return: count
 */


int numbers_switcher(char format, long int num, char *tmp)
{
	int count = 0;

	switch (format)
	{
	case 'd':
	case 'i':
	count += print_int(num, tmp);
	break;
	case 'b':
	count += print_binary(num, tmp);
	break;
	}
	return (count);
}

/**
 * _printf - print output to stdout according to a format string
 * @format: the format of the string to print
 *
 * Return: number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	char tmp[100];
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
			case '\0':
			return (-1);
			case 'c':
			case '%':
			case 's':
			count += handle_char_str_percent(format[i], arg);
			break;
			case 'i':
			case 'd':
			count += numbers_switcher(format[i], va_arg(arg, int), tmp);
			break;
			case 'b':
			count += numbers_switcher(format[i], va_arg(arg, unsigned int), tmp);
			break;
			default:
			_putchar('%'),	_putchar(format[i]), count += 2;
			break;
			}
		}
		else
			_putchar(format[i]), count++;
		i++;
	}
	va_end(arg);
	return (count);
}
