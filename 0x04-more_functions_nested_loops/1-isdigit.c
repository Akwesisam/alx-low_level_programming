#include "main.h"

/**
 * _isdigit-checks for 0 through 1
 *@c:character to be checked
 * Return:return 1 for success or 0 for failure
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
