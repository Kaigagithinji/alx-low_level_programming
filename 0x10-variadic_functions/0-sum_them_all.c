#include "variadic_functions.h"
#include <stdarg.h>

 /**
  * sum_them_all - Returns the sum of all its paramters.
  * @n: The number of paramters passed to the function.
  * @...: A variable number of parameters.
  *
  * Return: If n == 0 - 0.
  *         Otherwise - the sum of all parameters.
  */
 int sum_them_all(const unsigned int n, ...)
{
	va_list vars;
	unsigned int sum = 0, index;

	va_start(vars, n);

	for (index = 0; index < n; index++)
	sum += va_arg(vars, int);

	va_end(vars);

	return (sum);
}
