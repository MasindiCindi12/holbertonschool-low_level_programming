#include "main.h"

/**
 * _strchar - locate character in string
 * @s: source string
 * @c: character to find
 *
 * return: the string from character found
 */
char *_strchar(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[a])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
