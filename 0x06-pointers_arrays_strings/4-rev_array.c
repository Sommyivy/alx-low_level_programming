#include "main.h"
#include <string.h>
/**
*reverse_array - a function that concatenates two strings
*@a: copy to
*
*@n: copy from
*/
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
