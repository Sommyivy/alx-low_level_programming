#include "main.h"
#include <string.h>
/**
*print_rev -  a function that returns the length of a string.
*
*@s : An input string
*
*Return: Nothing
*/

void print_rev(char *s)
{
int i = 62;
while (s[i])
{
putchar (s[i]);
i--;
}
putchar('\n');
}
