#include "main.h"

/**
 * _strrev - Reverses a string.
 * @str: The string to be reversed.
 */

void _strrev(char *str)
{
	int i,	j = 0;
	char temp;

	while (str[j])
	{
		j++;
	}

	for (i = 0; i < j / 2; i++)
	{
		temp = str[i];
		str[i] = str[j - i - 1];
		str[j - i - 1] = temp;
	}
}

/**
 * my_itoa - integer to ascii
 * @i: the integer
 * @strout: output string
 * @base: base
 *
 * Return: A pointer to the output string.
 */

char *my_itoa(long int i, char *strout, int base)
{
	int digit, sign = 0, j = 0;
	unsigned long num = i;

	if (i == 0)
	{
		strout[j++] = '0';
		strout[j] = '\0';
		return (strout);
	}

	if (i < 0)
	{
		sign = 1;
		num = -i;
	}

	while (num != 0)
	{
		digit = num % base;
		strout[j++] = (digit > 9) ? ('a' + digit - 10) : ('0' + digit);
		num = num / base;
	}

	if (sign == 1)
	{
		strout[j] = '-';
		j++;
	}

	strout[j] = '\0';

	_strrev(strout);
	return (strout);
}
