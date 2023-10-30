#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates strings
 * @s1: the string to be concatenated upon
 * @s2: the sring to be concaenated to s1
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                  containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *series;
	int index, series_index = 0, size = 0;

	if (s1 == NULL)
		return "";
	if (s2 == NULL)
		return "";
	for (index = 0; s1[index] || s2[index]; index++)
		size++;
	series = malloc(sizeof(char) * size);
	if (series == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		series[series_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		series[series_index++] = s2[index];
	return (series);
}


