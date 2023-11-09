#include "main.h"

/**
 * _strncpy - Copies a string with limited bytes.
 * @dest: Destination array.
 * @src: Source string.
 * @n: Maximum number of bytes to copy.
 * Return: Pointer to dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
