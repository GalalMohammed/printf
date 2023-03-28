#include "main.h"

/**
 * printstr - print a string
 * @str: the string to be printed
 * @f: pointer to function to be called
 *
 * Return: count
 */
int printstr(char *str, char *(*f)(char *))
{
	int count = 0, i = 0;
	char *strCp = _strdup(str);

	if (strCp == NULL)
		strCp = "(null)";
	else if (f)
		strCp = f(strCp);
	while (strCp[i])
	{
		_putchar(strCp[i++]);
		count++;
	}
	if (str)
		free(strCp);
	return (count);
}
