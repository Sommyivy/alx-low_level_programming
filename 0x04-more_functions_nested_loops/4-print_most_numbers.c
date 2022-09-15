#include "main.h"
#include <ctype.h>
/**
*print_most_numbers - Entry point
*
*Return: @c for lowercase character. 0 for the rest.
*/
void print_most_numbers(void)

{
int a;
for (a = '0'; a <= '9'; a++)
{
if (a != 2 && a != 3)
{
_putchar(a);
}
}
_putchar('\n');
}

