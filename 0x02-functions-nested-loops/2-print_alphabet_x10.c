#include "holberton.h"
/*
 *
 *
 * prin 10 x alphabet t - in lowercase 
 *
 *
 *
 * Return x10;
 *
 */

void print_alphabet_x10(void)
{
	int n, co;

	co=0;

	while(co <10)
	{
		for(n='a'; n <='z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar(n);
	}
}
