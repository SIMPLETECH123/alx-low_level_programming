#include "dog.h"
#include <stdlib.h>
/**
 * new_dog-  a function that creates a new dog.
 * @name: name of the new dog
 * @age:age of the new dog
 * @owner: owner of the dog
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j, k, l;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->age = age;
	/*the lenght of thr string*/
	i = 0;
	while (name[i] != '\0')
		i++;
	j = 0;
	/*allocate space for the srtings*/
	while (owner[j] != '\0')
		j++;
	d->name = malloc(sizeof(char) * i);
	if (d->name == NULL)
		return (NULL);
	d->owner = malloc(sizeof(char) * j);
	if (d->owner == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		d->name[k] = name[k];
	for (l = 0; l < i; l++)
		d->owner[l] = owner[l];
	return (d);
}
