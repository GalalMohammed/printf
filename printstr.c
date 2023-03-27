#include "main.h"

/**
 * printstr - print a string
 * @str: the string to be printed
 *
 * Return: count
 */

int printstr(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str++);
		count++;
	}

	return (count);
}
