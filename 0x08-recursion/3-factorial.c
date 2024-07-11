#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number to return the factorial of.
 *
 * Return: If n is lower than 0, the function returns -1 to indicate an error.
 * Otherwise, it returns the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

