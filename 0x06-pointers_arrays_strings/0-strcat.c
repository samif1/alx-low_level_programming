#include "main.h"




char *_strcat(char *dest, char *src)
{
	int len = 0, i, len1 = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (dest[len1] != '\0')
	{
		len1++;
	}
	for (i = 0; i <= len; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
