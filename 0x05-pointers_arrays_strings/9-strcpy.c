#include "main.h"



char *_strcpy(char *dest, char *src)
{
	int l1 = 0;
	int l2 = 0;
	int l3;
	int i;

	while (src[l1] != '\0')
	{
		l1++;
	}
	while (dest[l2] != '\0')
	{
		l2++;
	}
	l3 = l1 + l2;
	for (i = 0; i < l3; i++)
	{
		dest[l1 + i] = src[i];
		return (*char(dest[i]));
	}
}
