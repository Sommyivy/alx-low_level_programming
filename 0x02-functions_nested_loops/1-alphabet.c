#include <stdio.h>
/**
* print_alphabet - function to print alphabett
*
* Return: Always 0 (Success)
*/
void print_alphabet()
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
