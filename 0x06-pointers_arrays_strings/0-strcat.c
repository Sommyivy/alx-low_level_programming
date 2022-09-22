#include "main.h" 
#include <string.h>
/**
*_strncat - a function that concatenates two strings
*
*@dest: copy to
*
*@src: copy from
*
*Return: two concat strings
*/
char *_strncat(char *dest, char *src)
{
int a, i;
for (i = 0; dest[i] != '\0'; i++)
;
for (a = 0; src[a] != '\0'; a++, i++)
dest[i] = src[a];
return (dest);
}
