#include "hoberton.h"

/**
 *
 * _isalpha - a function that checks alphabetic characters  
 *
 * Return : 1
 *
 */
int -alpha(int c)
{
	if(((c>'a') && (c<='z')) || ((c>= 'A') && (c <='Z)))
		return(1);
        else
		return(0);
}

