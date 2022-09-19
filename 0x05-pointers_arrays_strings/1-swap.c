#include "main.h"
#include <stdio.h>
/**
*swap_int -  entry level into the function
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
