#include "main.h"

/**
 * print_last_digit - Function to return 1 or -1 if printing a character.
 *
 * @n: charachter to return.
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}

