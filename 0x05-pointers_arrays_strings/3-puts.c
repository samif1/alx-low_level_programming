#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
		_putchar(str[len]);
	}
	_putchar('\n');
}
