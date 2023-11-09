#include "main.h"

/**
 * _strncat - concatenates
 * @dest: pointer destination
 * @src: pointer source
 * Return: returns dest
 * @n: unknown variable
 */


char *_strncat(char *dest, char *src, int n)
{
	int i;

	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	if (i < n)
	{
		ptr[i] = '\0';
	}
	return (dest);
}
