#ifndef dog_h
#define dog_h

/**
 * description -  Define a new type struct dog 
 *                in the header file
 */
/**
 * @struct dog - a new type defining a dog
 * @name: name of the dog in char
 * @age: age of the dog in float
 * @owner: name of the owner in char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
