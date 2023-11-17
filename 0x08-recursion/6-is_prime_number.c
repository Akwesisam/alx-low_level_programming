#include "main.h"
/**
 * is_prime_number - Checks if a number is prime
 * * @n: The number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

int is_prime_helper(int n, int i)
{
	if (n <= 2)
		return (n == 2);

	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime_helper(n, i + 1));
}
