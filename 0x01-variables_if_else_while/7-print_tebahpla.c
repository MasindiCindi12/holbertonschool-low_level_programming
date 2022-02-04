#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 *main - Entry point
 *
 *Return : Always 0 (Success)
 */
int main(void)
{
	char alpha = 'z';
	int i = 0;

	for (i = 0; i < 26; i++, alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
