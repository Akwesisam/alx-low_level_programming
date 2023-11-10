#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: The array of integers.
 * @n: Number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int tmp, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
