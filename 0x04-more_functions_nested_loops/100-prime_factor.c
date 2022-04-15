#include <stdio.h>
#include <math.h>

/**
 *main - Output the largest prime
 *
 *Return: 0 always
 */

int main(void)
{
long a, max_p;
long num = 612852475143;
double sqr = sqrt(num);

for (a = 1; a <= sqr; a++)
{
if (num % a == 0)
{
max_p = num / a;
}
}

printf("%ld\n", max_p);

return (0);
}
