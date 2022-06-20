#include "main.h"

/**
* _memset -> the pointer
* @s: first param
* @b: second parame
* @n: third parameter
* Return string pointer
**/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", s[i]);
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
}
