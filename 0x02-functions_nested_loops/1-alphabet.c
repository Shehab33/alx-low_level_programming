#include "main.h"
/**
 * print_alphabet -  a void Fn that prints alphabets and then prints newline
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
}
