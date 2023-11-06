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

#endif
