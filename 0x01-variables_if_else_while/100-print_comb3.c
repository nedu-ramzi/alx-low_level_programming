#include <stdio.h>
/**
  * main - prints all possible different combinations of two digits
  * Return: 0
  */

int main(void)
{
	int i = 0;

	while (i < 20)
	{
		int j = 0;

		while (j = i)
		{
			putchar(',');
			putchar(j + '0');
			j--;
		}
		i++;
	}
	return (0);
}
