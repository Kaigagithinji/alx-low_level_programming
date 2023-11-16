/**
 * File: 1-list_len.c
 * Author: Kaiga Githinji
 */

#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that prints the number of nodes
 * @h: The list_t list
 *
 * Return: The number of elements in h
 */

size_t list_len(const list_t *h)
{
	const list_t *node_pointer = h; 
	size_t count = 0;

	while (node_pointer != NULL)
	{
		count++;
		node_pointer = node_pointer->next;
	}
	return count;
}

