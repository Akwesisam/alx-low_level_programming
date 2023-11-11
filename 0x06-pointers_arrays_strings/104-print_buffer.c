#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes per line.
 * @b: The buffer to print.
 * @size: The number of bytes to print.
*/


void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
				for (index = 0; index < 10; index++)
				{
				if ((index + byte) >= size)
				printf("  ");
				else
				printf("%02x", *(b + index + byte));
				if ((index % 2) != 0 && index != 0)
					printf(" ");
				}
				for (index = 0; index < 10; index++)
				{
					if ((index + byte) >= size)
						break;

					else
					{
						char ch = *(b + index + byte);

						printf("%c", (ch >= 32 && ch <= 126) ? ch : '.');
					}
				}

				printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
