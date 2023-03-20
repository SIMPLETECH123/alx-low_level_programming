#ifndef MAIN_H
#define MAIN_H dog.h

/**
 * struct dog -define a new struct with name, age, owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);
 * void free_dog(dog_t *d);
 */

#endif
