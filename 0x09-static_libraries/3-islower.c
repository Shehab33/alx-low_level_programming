#include <ctype.h>
/**
 * _islower - is Fn that take char and return 1 when it is lowercase
 * @c: the int argument of Fn _islower
 * Return: 1 (when char is lowercase) otherwise 0
 */
int _islower(int c)
{

	if (islower(c))
	{
	return (1);
	}
	return (0);
}
