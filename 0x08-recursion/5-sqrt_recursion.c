#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * sqrt_recursion - retur the actual square root of a number
 * @n: number to calcukate the natural square root
 *
 * Return: the natural square root
 *
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *  _sqrt - Calcultes the natural square root
 *  @n: number to calculate the square the square root
 *  @i: iterate number
 *
 *  Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
