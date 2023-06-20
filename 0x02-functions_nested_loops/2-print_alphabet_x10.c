#include "main.h"

/**
 * print_alphabet_x10 - Function to return 1 or -1 if printing a character.
 *
 *
*/
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
