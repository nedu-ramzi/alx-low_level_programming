#include <stdio.h>
/**
  * main - print all lowercase alphabet that is not q and e
  * Return: Always 0
  */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
