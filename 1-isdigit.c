#include "main.h"

/**
 * _isdigit - function to chech if
 *            character is lowercase
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lowercase
 *         otherwise always 0 (Success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
