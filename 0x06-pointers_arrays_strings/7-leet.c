#include "main.h"

/**
 * leet - Encodes a string into 1337 leet speak.
 * @str: The string to encode.
 * Return: returns 0
*/






char *leet(char *str)
{
	int i;
	int index = 0;
	char leet[] = "43071";
	char alpha[] = "aeotlAEOTL";

	for (index = 0; str[index]; index++)
	{
		for (i = 0; i < 10; i++)
		{
			if (str[index] == alpha[i])
			{
				str[index] = leet[i];
			}
		}
	}
	return (str);
}
