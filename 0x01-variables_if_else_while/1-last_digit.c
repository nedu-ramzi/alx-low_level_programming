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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n);
	} else if (n == 0)
	{
		printf("The lasgt digit of %d and is 0\n", n);
	} else if (n < 6)
	{
		printf("The last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
