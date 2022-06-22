#include "main.h"

/**
* _strchr -> pointer of string function.
* @s: first parameter.
* @c: second parameter.
* Return: string s.
**/
char *_strchr(char *s, char c)
{
	int l = 0;
	int i;
	int count = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		if (s[i] != c)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	for (i = count; i < l; i++)
	{
		_putchar(s[i] + '0');
	}
	_putchar('\n');
}
