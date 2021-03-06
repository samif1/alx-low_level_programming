#include <stdarg.h>
#include "main.h"

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

	int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int)
	}
	return (sum);
	va_end(a);
}
