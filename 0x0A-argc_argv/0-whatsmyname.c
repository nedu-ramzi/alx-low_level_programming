#include <stdio.h>
#include "main.h"
/**
  * main - prints the name of the program
  * @argc: number of argument
  * @argv: array of character argument
  * Return: 0
  */


int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
