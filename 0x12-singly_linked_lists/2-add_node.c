#include "lists.h"

/**
* *add_node - the linked list function.
* @head: the first parameter.
* @str: the string parameter.
* Return: the address of the new element.
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	ptr->str = str;
	ptr->next = NULL;
	if (*head != NULL)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}
	else
		return (NULL);
}
