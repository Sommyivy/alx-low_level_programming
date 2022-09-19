#include "main.h"
#include <stdio.h>
/**
 *swap_int: a function to swap figurea
 *
 *@a : a variable
 *
 *@b : an integer variable
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
