#include "main.h"
/**
 * factorial - Returns the factorial of a number
 * @n: The number to get the factorial of
 *
 * Return: The factorial of n, or -1 on error
 */
int factorial(int n)
{
	int result = 1;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	result = n * factorial(n - 1);

	return (result);
}
