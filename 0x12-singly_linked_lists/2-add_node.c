#include "lists.h"
#include <stdio.h>

/**
 * add_node - function that a new node at the beginning of a list_t list.
 * @head: a pointer to the head of the list_t list
 * @str: the string to be added to the list
 *
 * Return:  
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return NULL;
	}
	
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->len = (unsigned int)strlen(str);
	new_node->next = *head;
	*head = new_node;

	return new_node;
}

	
