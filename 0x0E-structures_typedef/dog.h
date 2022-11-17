#ifndef DOG_H
#define DOG_H
/**
  * struct dog - struct that stores some information of a dog
  * @name: name of the dog, character string
  * @age: age of the dog, integer
  * @owner: owner of the dog, character string
  * Description: struct called "dog" that stores its name, its age
  * and owners name.
  */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
