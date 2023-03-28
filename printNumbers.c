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

/**
  * print_binary - prints integer in binary
  * @arg: the number to be printed
  * @tmp: output string
  *
  * Return: count
  */

int print_binary(long int arg, char *tmp)
{
	int count = 0;
	char *strout = my_itoa(arg, tmp, 2);

	while (*strout)
	{
		_putchar(*strout++);
		count++;
	}
	return (count);
}

/**
  * print_unsignedInt - prints unsigned numbers
  * @arg: the number to be printed
  * @tmp: output string
  *
  * Return: count
  */
int print_unsignedInt(unsigned int arg, char *tmp)
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

/**
  * print_octal - prints unsigned numbers in octal representation
  * @arg: the number to be printed
  * @tmp: output string
  *
  * Return: count
  */
int print_octal(unsigned int arg, char *tmp)
{
	int count = 0;
	char *strout = my_itoa(arg, tmp, 8);

	while (*strout)
	{
		_putchar(*strout++);
		count++;
	}
	return (count);
}


/**
  * print_hex - prints unsigned numbers in hex representation
  * @arg: the number to be printed
  * @tmp: output string
  * @to_upper_flag: flag to indicate letters case to be printed
  *
  * Return: count
  */
int print_hex(unsigned int arg, char *tmp, char to_upper_flag)
{
	int count = 0;
	char *strout = my_itoa(arg, tmp, 16);

	if (to_upper_flag)
	{
		strout = toUpper(strout);
	}
	while (*strout)
	{
		_putchar(*strout++);
		count++;
	}
	return (count);
}
