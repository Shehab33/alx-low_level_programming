#include "main.h"
#include <stdio.h>

/**
 * _strcat - This function appends the src string to the dest string
 * @dest: the final string
 * @src: the string that will be added to dest
 * Return: dest the result after adding src to dest
 */
char *_strcat(char *dest, char *src)
{
	int i,x;
	i = 0;

	while(*src != '\0')
	{
	i++;
	}
	for (x = 0; src[x] != '\0'; x++)
	{
	dest[i] = src[x];
	i++;
	}

	return (dest);
}
