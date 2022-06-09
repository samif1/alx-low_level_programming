#include "main.h"

/**
* DESCRIPTION : print_sign(int n)
* it checks if n is + or 0 or -
*
*/ Return 1, or 0, or - 1.
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
