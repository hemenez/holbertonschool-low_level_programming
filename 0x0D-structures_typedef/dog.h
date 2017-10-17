#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - new structure defined for Django
 * @name: first member
 * @age: second member
 * @owner: third member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
