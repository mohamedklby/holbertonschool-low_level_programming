#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure pour d√finir les propri√t√s d'un chien
 * @name: nom du chien.
 * @owner: propri√taire du chien.
 * @age: age du chien.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to initialize
 * @age: Age to initialize
 * @owner: Owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - function with 1 argument
 * @d: structure pointer
 *
 * Description: prints a struct
 * Return: na
 */

void print_dog(struct dog *d)
;

typedef struct dog dog_t;

#endif

