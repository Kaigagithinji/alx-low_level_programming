#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a new string 
 *           which is a duplicate of the string.
 *@str - the string to be copied
 *
 *Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *copy;
	int index, size = 0;
	if (str == NULL)
		return(NULL);
	for (index = 0; str[index]; index++)
		size++;
	copy = malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return(NULL);
	for (index = 0; str[index]; index++)
		copy[index] = str[index];
	copy[size] = '\0';
	return(copy);
}

