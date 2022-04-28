#include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: pointer to a string
 * Return: number of characters in s string
 */


int _strlen_recursion(char *s)
{
if (s[0] == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
