#include "main.h"
#include <ctype.h>
/**
*print_numbers - Entry point
*
*Return: @c for lowercase character. 0 for the rest.
*/
void print_numbers(void)

{
int a;
for (a = '0'; a <= '9'; a++)
{
_putchar(a);
}
_putchar('\n');
}

