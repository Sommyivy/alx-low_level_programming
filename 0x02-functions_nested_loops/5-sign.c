#include "main.h"
/**
*print_sign - a function to check for alphabetst
*
*lowercase character. Another cases, shows 0
*
*@n : The character in ASCII code
*
*Return: 1 for lowercase character. 0 for the rest. -1 for nagative.
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1);
}
}
