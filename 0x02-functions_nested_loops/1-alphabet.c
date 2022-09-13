#include <stdio.h>
/**
 * print_alphabet - function to print alphabett
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
putchar('\n');
}
}
