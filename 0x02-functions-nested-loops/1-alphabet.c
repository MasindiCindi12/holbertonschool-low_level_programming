#include "holberton.h"

/**
 *
 * print alphabet - a function that prints alphabets , in lowercase
 *
 * Return : 0 Always
 *
 */

void print_alphabet(void)
{

	int n;

	for (n = 'a' ; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
