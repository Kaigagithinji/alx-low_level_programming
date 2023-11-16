#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: pointer to the head node of the list
 * @str: the string to be duplicated
 */

list_t *add_node_end(list_t **head, const char *str)

	list_t *new_node = malloc(sizeof(list_t));
{
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
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return new_node;
	}
	list_t *node_pointer = *head;
	while (node_pointer->next != NULL)
	{
		node_pointer = node_pointer->next;
	}
	node_pointer->next = new_node;

	return new_node;
}

