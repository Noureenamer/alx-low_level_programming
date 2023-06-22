#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 *
 * @size: takes input from other functions.
*/
void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
