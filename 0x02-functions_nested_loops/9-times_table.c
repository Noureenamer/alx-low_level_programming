#include "main.h"

/**
 * times_table - Function to return 1 or -1 if printing a character.
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(',');
		_putchar(' ');

		prod num *mult;
		if (prod <= 9)
			_putchar(' ');
		else
			_putchar((prod / 10) + 48);
		_putchar((prod % 10) + 48);
	}
	_putchar('\n');
}

