#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strcpy - Fn that copy string 
 * @dest: string that will value copied to
 * @src: string that will be copied to dest
 * Return: the value of the copied string include \0
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int len = 0;

	while (*(src + len) != '\0')
	{
	len++;
	}
	for( ; x < len; x++)
	{
	dest[x] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
