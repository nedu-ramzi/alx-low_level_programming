#include <stdio.h>
/**
  * main - prints alphabets, capital and small letters
  * Return: Always 0
  */
int main(void)
{
	char lo = 'a';
	char up = 'A';

	while (lo <= 'z')
	{
		putchar(lo);
		lo++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	return (0);
}
