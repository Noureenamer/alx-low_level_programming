#include <stdlib.h>
#include <time.h>
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
char ch = 'a';
char ch = 'A';

/*prints a -z*/
while (ch <= 'z')
{
putchar(ch);
ch++; }
/*prints A - Z*/
while (ch <= 'Z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
