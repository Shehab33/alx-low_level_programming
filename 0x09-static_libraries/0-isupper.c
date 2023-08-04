#include <ctype.h>
/**
 * _isupper - is Fn that take char and return 1 when it isuppercase
 * @c: the int argument of Fn _iupper
 * Return: 1 (when char is uppercase) otherwise 0
 */
int _isupper(int c)
{

	if (isupper(c))
	{
	return (1);
	}
	return (0);
}
