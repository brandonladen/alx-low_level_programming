#include "main.h"
#include <string.h>
/**
* _strcat - concatenates two strings
* @dest: output
* @src: output
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;

/* Get length of dest string*/
int dest_len = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append src string to dest*/
while (src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}

/* Add terminating null byte*/
dest[dest_len + i] = '\0';

/* Return pointer to dest string*/
return (dest);
}
