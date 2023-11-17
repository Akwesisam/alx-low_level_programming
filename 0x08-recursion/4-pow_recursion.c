#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The number to raise
 * @y: The power
 *
 * Return: x raised to power y, or -1 on error
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	result = x * _pow_recursion(x, y - 1);
	return (result);
}
