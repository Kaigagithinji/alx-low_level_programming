/**
 * File: 0-print_list.c
 * Author: Kaiga Githinji
 */

#include "lists.h"
#include <stdio.h>

/**
  * print_list - function that prints all elements in a list
  * @h: The list_t list
  *
  * Return: The number of nodes in h
  */

size_t print_list(const list_t *h)
{
	const list_t *node_pointer = h;
	size_t count = 0;

	while (node_pointer != NULL)
	{
		if (node_pointer->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", node_pointer->len, node_pointer->str);
		}
	
		count ++;
		node_pointer = node_pointer->next;
	}

	return count;

}	
