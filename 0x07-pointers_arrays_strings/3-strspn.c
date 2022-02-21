#include "main.h"

/**
 *  _strspn - search a string for a set of bytes
 *   @s: source string
 *   @accept: accepted string
 *
 *   Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accepted)
{
	unsigned int a = 0, b, t = 0;

	while (acept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
