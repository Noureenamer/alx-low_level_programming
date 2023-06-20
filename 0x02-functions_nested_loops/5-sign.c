#include "main.h"

/**
 * print_sign - Function to return 1 or -1 if printing a character.
 *
 * @n: charachter to return.
 *
 * Return: Always 0 (Success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

