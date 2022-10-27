#include "main.h"

/**
  * _strncpy - copies a string to a destination
  * @dest: destination of string
  * @src: source of string
  * @n: number
  * Return: destination
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);

}
