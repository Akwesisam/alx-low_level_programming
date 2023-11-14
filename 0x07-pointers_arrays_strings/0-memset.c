#include "main.h"

/**
 * _mesmet - something
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: returns 0
 */


char *_memset(char *s, char b, unsigned int n)
{
	char *current = s;

	while (n-- > 0)
	{
		*current++ = b;
	}
	return (s);
}
