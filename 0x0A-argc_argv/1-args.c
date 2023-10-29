#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: the number of arguments supplied
 * @argv: an array of the arguments
 *
 * Return: always 0.
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc -1);
	return(0);
}

