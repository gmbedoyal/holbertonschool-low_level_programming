#ifndef DOG_H
#define DOG_H

/**
 * struct dog - perro
 * @name: nombre
 * @age: edad
 * @owner: due√o
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
