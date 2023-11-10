#include "main.h"


/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 * Return: The capitalized string.
*/


char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z') && str[index - 1] >= 32)
			index++;
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}

	return (str);
}
