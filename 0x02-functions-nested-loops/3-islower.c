#include "holberton.h"

/*
 *
 *  is_lower - a function that checks for locase characters
 *
 *  Return: 1 Always
 *
 */
int _islower(int c)
{
	if(c >='a' && c <='z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
