#include "main.h"






/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to encode.
 * Return: A pointer to the encoded string.
*/



char *rot13(char *str)
{
	int i;
	int index;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	index = 0;

	while (str[index])
	{
		for (i = 0; i < 52; i++)
		{
			if (str[index] == input[i])
			{
				str[index] = output[i];
				break;
			}
		}
		index++;
	}
	return (str);
}
