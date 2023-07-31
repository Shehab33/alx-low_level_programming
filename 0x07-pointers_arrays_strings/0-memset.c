#include "main.h"
#include <stdio.h>
/**
 * _memset - Fn that fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: first char
 * @b: second char
 * @n: number of bytes
 * Return: char of the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s); 
}
