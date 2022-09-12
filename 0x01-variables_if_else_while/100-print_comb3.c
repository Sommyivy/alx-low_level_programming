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
{
int i, j;
for (i = '0'; i < '9'; i++)
{
for (j = 'i'; j <= '9'; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
}
return (0);
}
