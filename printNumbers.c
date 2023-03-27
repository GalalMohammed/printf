#include "main.h"

/**
  * print_int - prints decimal numbers, positive and negative
  * @arg: the number to be printed
  * @tmp: output string
  *
  * Return: count
  */

int print_int(int arg, char *tmp)
{
	int count = 0;
	char *strout = my_itoa(arg, tmp, 10);

	while (*strout)
	{
		_putchar(*strout++);
		count++;
	}
	return (count);
}
