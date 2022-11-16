#include <stdio.h>

/**
  * main - prints the name of gthe file it was compiled from
  * Return: 0
  */

int main(void)
{
	char *myFile = __FILE__;

	printf("%s\n", myFile);

	return (0);
}
