#include "main.h"

/**
 * sqrt_recursion - Checks for the square root of @c
 * @g: Guess at sqrt
 * @c: Number to find sqrt of
 * Return: -1 or sqrt of c
 */
int sqrt_recursion(int g, int c)
{
if (g * g == c)
return (g);
if (g * g > c)
return (-1);
return (sqrt_recursion(g + 1, c));
}

/**
* _sqrt_recursion - Returns the natural square of a number
*
* @n: integer to find sqrt of
*
* Return: Natural square root or -1
*/

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);

return (sqrt_recursion(1, n));
}
