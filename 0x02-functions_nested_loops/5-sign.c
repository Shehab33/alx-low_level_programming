#include "main.h"
/**
 * print_sign - Fn to detect sign
 * @n: the parameter of Fn
 * Return: 1 if greater than 0 and so
 */
int print_sign(int n)
{

	if (n  > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
