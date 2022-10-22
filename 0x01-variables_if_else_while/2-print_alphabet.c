#include <stdio.h>
/**
  * main - program that prints the alphabet in lowercase
  * Return: 0
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar();
		ch++;
	}
	return (0);
}
