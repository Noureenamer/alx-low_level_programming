#include"main.h"

/**
 * _isupper - check if c i upper
 *
 * @c: checks input of function
 *
 * Return:  Returns 1 if  is uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 99)
		return (1);
	else
		return (0);
}
