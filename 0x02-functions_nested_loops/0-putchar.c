#include "main.h"
/**
 *
 * Main - Entry _putchar : Writes the character c to stdou
 *
 * Return : On Success (1)
 *
 * 
 */

int main (void)
{
     char *sh="Holberton";

     while (*sh)
     {
	     _putchar(*sh);
	     sh++;
     }

      return (0);
}
