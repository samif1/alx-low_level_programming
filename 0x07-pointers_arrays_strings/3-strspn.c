#include "main.h"

/**
* _strspn -> function string pointer.
* @s: first parameter.
* @accept: second parameter.
* Return: length of accept.
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != accept[c])
		{
			count++;
		}
		else
		{
			break;
		}

	}
	return (count);
}
