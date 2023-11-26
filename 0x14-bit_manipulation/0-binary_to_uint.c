#include "main.h"
unsigned int binary_to_uint(const char *b) 
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL) 
	{
		return 0;
	}

	while (b[i] != '\0') 
	{
		if (b[i] != '0' && b[i] != '1') 
		{
			return 0;
		}
		
		number <<= 1;
		number += b[i] - '0';
		i++;
	}

			    return number;
}

