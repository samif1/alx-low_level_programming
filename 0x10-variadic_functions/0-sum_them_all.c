#include "variadic_functions.h"

/**
* sum_them_all -  function.
* Description - the function that returns sum.
* @n: the first fixed parameter.
* @...:  the elli[sesi.
* Return: sum of inter.
**/

int sum_them_all(const unsigned int n, ...)
{
	va_list a;

	va_start(a, n);

	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int)
	}
	va_end(a);
	return (sum);
}
