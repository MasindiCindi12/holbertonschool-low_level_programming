#include "main.h"

/**
 * largest_number - returns the largest of 3 number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: last number
 *
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largets = a;
	else if (b >= a && b >= c)
		largest = b;
	else
		largets = c;

	return (largest);
}
