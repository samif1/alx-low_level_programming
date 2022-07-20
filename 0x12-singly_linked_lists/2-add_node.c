#include "lists.h"

/**
* add_node - the linked list function.
* @head: the first parameter.
* @str: the string parameter.
* Return: the address of the new element.
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	unsigned int n = 0;

	while (str[n])
		n++;

	ptr->str = strdup(str);
	ptr->next = NULL;
	if (ptr != NULL)
	{
		ptr->next = *head;
		ptr->len = n;
		*head = ptr;
	}
	return (*head);
	else
		return (NULL);
}
