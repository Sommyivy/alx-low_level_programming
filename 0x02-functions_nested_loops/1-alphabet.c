#include <stdio.h>
/**
* print_alphabet - function to print alphabett
*
* Return: Always 0 (Success)
*/
print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
