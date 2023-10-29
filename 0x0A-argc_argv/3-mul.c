#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the results of the multiplication of two numbers, followed by a new line.
 * @argc: the number of arguments the program receives
 * @argv: an array of pointers to the argument
 * Return: if the program receives two arguments - 0
 * 	   if the program does not receive two arguments - 1
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	
	printf("%d\n",c);
	return(0);
}

