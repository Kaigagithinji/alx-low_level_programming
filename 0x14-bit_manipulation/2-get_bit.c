#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value = (n >> index) & 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}
	
	return bit_value;
}
