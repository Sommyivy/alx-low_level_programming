#include "main.h"
#include <ctype.h>
/**
*_isdigit - Entry point
*
*lowercase character. Another cases, shows 0
*
*@c: The character in ASCII code
*
*Return: 1 for lowercase character. 0 for the rest.
*/
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
