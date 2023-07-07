#include "main.h"

/**
 * _islower - Function to return 1 or -1 if printing a character.
 *
 * @c: charachter to return.
 *
 * Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

