#include <stdio.h>
#include "main.h"

/**
 * _printf - print output to stdout according to a format string
 * @format: the format of the string to print
 *
 * Return: number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL || !format[i + 1])
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
			default:
			_putchar('%'),	_putchar(format[i]);
			count += 2;
			break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
