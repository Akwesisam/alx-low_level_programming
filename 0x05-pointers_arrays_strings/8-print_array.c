#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print array
 * @a:first value
 * @n: second value
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
