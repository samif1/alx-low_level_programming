#include "lists.h"

/**
* add_node_end - the function of linked lists.
* @head: head.
* @str: string.
* Return: head.
**/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
		temp = *head;
	if (temp->link != NULL)
	{
		temp = temp->link;
	}
	temp->next = ptr;
	return (*head);
}

