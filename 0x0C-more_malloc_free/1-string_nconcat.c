#include "main.h"

/**
  * string_nconcat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * @n: number of bytes
  * Return: NULL if fail, else pointer to malloc memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int ls1, ls2, ls, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ls1 = 0; s1[ls1] != '\0'; ls1++);
	for (ls2 = 0; s2[ls2] != '\0'; ls2++);
	if (n > ls2)
		n = ls2;
	ls = ls1 + n;
	s = malloc(ls + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ls; i++)
		if (i < ls1)
			s[i] = s1[i];
		else
			s[i] = s2[i - ls1];
	s[i] = '\0';
	return (s);
}
