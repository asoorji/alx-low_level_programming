#include "main.h"

/**
 * factorial - Factorial Function
 * @n: The number whose factorial is to be returned
 * Return: 0, 1, or n * recurssive call
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
