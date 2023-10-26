#include "main.h"

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);s++;
puts_recursion(s);
} 
}
	
