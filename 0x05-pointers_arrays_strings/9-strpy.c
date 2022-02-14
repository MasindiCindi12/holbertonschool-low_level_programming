#include "main.h"

/**
 * _strcpy - Copy s string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *scr)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0'

		return (dest);
}
