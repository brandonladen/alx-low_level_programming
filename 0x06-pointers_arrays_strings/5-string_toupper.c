#include "main.h"
/**
* string_toupper - Changes all lowercase latters of a string
* to uppercase
* @n: pointer
* Return: n
*/
char *string_toupper(char *n)
{
int i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
/* subtracting the difference between the ASCII codes of 'a' and 'A'*/
}
i++;
}
return (n);
}
