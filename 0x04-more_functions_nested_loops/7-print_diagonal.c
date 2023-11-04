#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the terminal
 * @n: The number of \\ characters to print
 *
 * Return: 0 on success, non-zero on failure
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');

	}

	for (i = 0 ; i < n ; i++)
	{

		for (j = 0 ; j < i ; j++)
			_putchar(' ');

		_putchar('\\');

		if (i < n - 1)
			_putchar('\n');
	}

	return (0);
}
