#include "dog.h"
#include <stdlib.h>
/**
   * *new_dog - creates a new dog
   * @name: name of the dog, character string
   * @age: age of the dog
   * @owner: owner of the dog, character string
   * Return: pointer to new dog, NULL if it fails
   */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	int i, j, k;
	char *n, *o;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];
	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;

	return (new_dog);
}
