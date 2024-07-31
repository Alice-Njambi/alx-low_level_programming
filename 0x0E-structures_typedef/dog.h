#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: This structure holds the basic information about a dog.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
