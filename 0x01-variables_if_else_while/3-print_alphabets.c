#include <stdio.h>
/**
  * main - prints alphabets, capital and small letters
  * Return: Always 0
  */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
}
