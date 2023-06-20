#include "main.h"

/**
 * print_alphabet - Function to return 1 or -1 if printing a character.
 *
 *
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
