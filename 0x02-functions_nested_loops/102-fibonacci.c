#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
    int i;
    int a = 1;
    int b = 2;
    int c;

    printf("1, 2, ");
    for (i = 0; i < 48; i++)
    {
        c = a + b;
        printf("%ld", c);
        a = b;
        b = c;

        if (i != 47)
            printf(", ");
    }
    printf("\n");

    return (0);
}