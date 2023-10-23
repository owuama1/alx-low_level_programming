#ifndef DOG_H
#define DOG_H
#include <unistd.h>
/**
*struct dog - a struct named dog
*@name: name
*@age: age
*@owner: the owner
*Description: a struc named dog used as a header file
*/
struct dog
{
    char *name;
    float age;
    char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif /* DOG_H */
