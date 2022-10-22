#include <stdio.h>

/**
  * main - prints all the numbers of base 16 in lowercase
  * Return: 0
  */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i > 9)
		{
			char hex = 'abcdef';

			putchar("%d%c", i, hex + '0');
		}
		i++;
	}
	return (0);
}
