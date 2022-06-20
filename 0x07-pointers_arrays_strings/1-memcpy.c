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
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

