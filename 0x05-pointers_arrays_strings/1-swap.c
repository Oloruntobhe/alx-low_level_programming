#include "main.h"

/**
 * swap_int - main function.
 * @a: Pointer with the address value.
 * @b: Pointer with the address value.
 * Return : void
 */

void swap_int(int *a, int *b)
{
int i;

i = *a;
*a = *b;
*b = i;
}
