#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char character;
int integer;
long int long_int;
long long int long_long_int;
float float_number;
printf("Size of a char: %lu byte(s)\n", sizeof(character));
printf("Size of an int: %lu byte(s)\n", sizeof(integer));
printf("Size of a long int: %lu byte(s)\n", sizeof(long_int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long_long_int));
printf("Size of a float: %lu byte(s)\n", sizeof(float_number));
return (0);
}
