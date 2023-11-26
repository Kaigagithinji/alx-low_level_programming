#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == 0)
	{
		return NULL;
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return 0;
		}
		number = (number << 1) + (*b - '0');
	}
	
	return number;
}


