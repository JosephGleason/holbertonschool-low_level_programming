#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to a string containing the dog's name
 * @age: Floating point number representing the dog's age
 * @owner: Pointer to a string containing the owner's name
 *
 * Description: A structure that stores details about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */

