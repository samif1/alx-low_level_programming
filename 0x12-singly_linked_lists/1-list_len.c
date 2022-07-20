#include "lists.h"

/**
*list_len - structure list.
* @h: the parameter.
* Return: the no of elements.
**/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

