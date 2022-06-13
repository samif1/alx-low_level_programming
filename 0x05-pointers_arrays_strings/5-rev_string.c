#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 * Return: 0
 */
void rev_string(char *s)
{
	char ch;
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}
}
