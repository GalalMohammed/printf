#include "main.h"

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}


/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int a = 0;
	char *s = str;

	while (s[a])
	{
		while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] > 'm' && s[a] <= 'z') || (s[a] > 'M' && s[a] <= 'Z'))
			{
				s[a] -= 13;
				break;
			}

			s[a] += 13;
			break;
		}

		a++;
	}

	return (str);
}

/**
 * toUpper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */

char *toUpper(char *str)
{
	int i = 0;
	char *s = str;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (str);
}

/**
 * _strrev - Reverses a string.
 * @str: The string to be reversed.
 *
 * Return: pointer to reversed string
 */

char *_strrev(char *str)
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
	return (str);
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
