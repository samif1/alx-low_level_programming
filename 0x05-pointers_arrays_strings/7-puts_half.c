#include "main.h"


/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		for (i = len / 2 + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
