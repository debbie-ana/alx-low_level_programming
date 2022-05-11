#ifndef DOG
#define DOG

/**
 * struct dog - struct for dog
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif