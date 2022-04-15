#include "main.h"
/**
 *_isupper - check if its an uppercase character
 *
 *@c: Check the character
 *
 *Return: 1 (success) or 0 (failure)
 */


int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}

}

