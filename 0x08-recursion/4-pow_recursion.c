#include "main.h"

/**
 * pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: If y is negative, the function returns -1 (error).
 * If y is 0, the function returns 1 (base case).
 * Otherwise, it returns x raised to the power of y.
 */
int pow_recursion(int x, int y)
{
		if (y < 0)
			return (-1);
		if (y == 0)
			return (1);
	return (x * pow_recursion(x, y - 1));
}

