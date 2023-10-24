#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Description: 'printing using system call'
 * Parameters: none
 * Return: Always 1
 */

int main(void)
{
    const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
    size_t len = strlen(quote);
    ssize_t bytes_written = write(2, quote, len);

    if (bytes_written == len)
    {
        write(2, "\n", 1);
        exit(1);
    } else
    {
        exit(1);
    }
}
