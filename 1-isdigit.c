#include "main.h"

/**
 * _isdigit - Checks if the characters are numbers
 *
 *@c: check the character
 *
 *Return: 1 (success) or 0 (faliure)
 */

int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
