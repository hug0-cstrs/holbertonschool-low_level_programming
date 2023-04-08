#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int long_name, long_owner, x;

	ptr_dog = malloc(sizeof(*ptr_dog));
	if (ptr_dog == NULL)
	{
		return (NULL);
	}
	for (long_name = 0; name[long_name] != '\0'; long_name++)
	;
	for (long_owner = 0; owner[long_owner] != '\0'; long_owner++)
	;

	ptr_dog->name = malloc(sizeof(char) * long_name + 1);
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	for (x = 0; x < long_name; x++)
	{
		ptr_dog->name[x] = name[x];
	}
	ptr_dog->name[x] = '\0';

	ptr_dog->age = age;

	ptr_dog->owner = malloc(sizeof(char) * long_owner + 1);
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	for (x = 0; x < long_owner; x++)
	{
		ptr_dog->owner[x] = owner[x];
	}
	ptr_dog->owner[x] = '\0';
	return (ptr_dog);
}
