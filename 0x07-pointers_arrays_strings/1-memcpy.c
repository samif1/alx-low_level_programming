#include "main.h"

/**
* _memcpy -> pointer function.
* @dest: fird para.
* @src: sec.
* @n: sixe.
* Return: dest.
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int len = 0;
	int len1 = 0;
	int i;
	int c;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[len1] != '\0'}
	{
		len1++;
	}
	c = len + len1;

	for (i = 0; i < c; i++)
	{
		if (i == n)
		{
			break;
		}
		else
		{
			dest[len + i] = src[i];
		}
	}
	return (dest);
}

