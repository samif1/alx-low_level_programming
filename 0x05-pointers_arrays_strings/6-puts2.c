#include "main.h"

/**
 * puts2 - prints xters of a string
 * @str: the used string reference
 * Return: 0
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{

		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
