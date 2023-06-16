#include <stdio.h>

/**
 *
 * main - entry point*
 * Description: a c program using sizeof function
 *
 * Return: always 0 (sucess)
*/

int main(void)
{
  printf("Size of a char: %d byte(s)\n", sizeof(char));
  printf("Size of an int: %d byte(s)\n", sizeof(int));
  printf("Size of a long int: %d byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
  printf("Size of a float: %d byte(s)\n", sizeof(float));
    return (0);
}
