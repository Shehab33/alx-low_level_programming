#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Printing Single numbers[0,1,...,9] using putchar
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
	putchar(i);
	i++;
	}
	printf("\n");
	return (0);
}
