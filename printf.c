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
	count += printstr(va_arg(arg, char *), NULL);
	break;
	case 'R':
	count += printstr(va_arg(arg, char *), rot13);
	break;
	case 'r':
	count += printstr(va_arg(arg, char *), _strrev);
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
	case 'u':
	count += print_unsignedInt(num, tmp);
	break;
	case 'o':
	count += print_octal(num, tmp);
	break;
	case 'x':
	count += print_hex(num, tmp, LOWER);
	break;
	case 'X':
	count += print_hex(num, tmp, UPPER);
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
			i++;
			if (format[i] == '\0')
				return (-1);
			else if (format[i] == 'c' || format[i] == '%' || format[i] == 's'
					|| format[i] == 'R' || format[i] == 'r')
				count += handle_char_str_percent(format[i], arg);
			else if (format[i] == 'i' || format[i] == 'd')
				count += numbers_switcher(format[i], va_arg(arg, int), tmp);
			else if (format[i] == 'b' || format[i] == 'u'
					|| format[i] == 'o' || format[i] == 'x'
					|| format[i] == 'X')
				count += numbers_switcher(format[i], va_arg(arg, unsigned int), tmp);
			else
				_putchar('%'),  _putchar(format[i]), count += 2;
		}
		else
			_putchar(format[i]), count++;
		i++;
	}
	va_end(arg);
	return (count);
}
