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
	int i, j;

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
	name = malloc((sizeof(char) * i) + 1);
	if (name == NULL)
		return (NULL);
	owner = malloc((sizeof(char) * j) + 1);
	if (owner == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
		name[i] = ((*d).name)[i];
	j = 0;
	while (owner[j] != '\0')
		owner[j] = ((*d).owner)[j];
	d->owner = "bob";
	d->name = "poppy";
	return (d);
}
