#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: 0 (success)
*/

int main(void)
{
char ch = 'a', CH = 'A';

/*prints a -z*/
while (ch <= 'z')
{
putchar(ch);
ch++; 
}
/*prints A - Z*/
while (ch <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
