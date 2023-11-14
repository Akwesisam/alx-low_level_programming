#include "main.h"
#include <string.h>
/**
 * _strspn - Gets length of prefix substring
 * @s: The string to search
 * @accept: The bytes to accept
 *
 * Return: Number of accepted bytes from s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		if (strchr(accept, *s++) == NULL)
		{
			break;
		}
		len++;
	}

	return (len);
}
