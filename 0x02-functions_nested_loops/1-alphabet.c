#include <stdio.h>
/**
* print_alphabet - function to print alphabett
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
