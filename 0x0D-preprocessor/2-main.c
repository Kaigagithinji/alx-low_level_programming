#include <stdio.h>
#include <stdlib.h>

/**
 * description - program that prints the name of the file 
 *               it was compiled from, followed by a new line
 *@s: the string to be printed
 * @__FILE__: macro that return name of the current file
 */              

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
