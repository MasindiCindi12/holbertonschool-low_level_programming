#include "main.h"

/**
 * _memset - Fill memory with a constant byte .
 * @s: memory area to fill
 * @b: constant byte to fill.
 * @n: bytes of memory area to fill
 *
 * Return: the memory area filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
	unsigned int a;	for (a
=======
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
>>>>>>> c47a6777d47725732a9d40dd3d40fa872d3e29c9
