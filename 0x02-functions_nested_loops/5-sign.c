#include "main.h"

/**
 * print_sign - Entry Point
 * Description: function that prints the sign of a number
 * @n: input parameter
 *
 * Return: 1 prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar(n);
	}
	else if (n < 0)
	{
		return (-1);
		putchar('-');
	}
}
