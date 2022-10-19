#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - program that assigns a random number to the variable n
* Return: Always 0
*/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	} else if (n < 6)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}
