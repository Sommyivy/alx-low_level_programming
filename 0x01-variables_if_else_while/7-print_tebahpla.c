#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{char ch = 'z';
while (ch <= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);

