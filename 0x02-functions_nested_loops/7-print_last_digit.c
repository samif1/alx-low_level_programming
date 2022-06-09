#include "main.h"

/**
 * print_last_digit - Entry Point
 * Description:  function that prints the last digit of a number
 * @n : input parameter
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	return (r);
	_putchar(r);
}
