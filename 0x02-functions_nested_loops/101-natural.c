#include <stdio.h>
/**
 * main - main function
 * Description: prints the sum of all the multiples of 3 or 5
 * Return: zero
 **/
int main(void)
{
    int m, n  = 0;

    for (m = 3; m < 1024; m++)
    {
        if ((m % 3 == 0) || (m % 5 == 0))
        {
            n = n + m;
        }
    }
    printf("%d\n", n);

    return (0);
}