#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n%10==0)
	printf("Last digit of %d is %d and is 0",n,n%10);
	if (n%10<6 && n%10 !=0)
	printf("Last digit of %d is %d and is less tahn 6 and not 0",n,n%10);
	else
	printf("Last digit of %d is %d and is greater than 5",n,n%10);
	return (0);
}
