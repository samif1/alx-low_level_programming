#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */
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
	for (i = 0; i < len; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
