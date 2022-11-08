#ifndef DOG_H
#define DOG_H

/**
 * struct dog - perro
 * @name: nombre
 * @age: edad
 * @owner: due√o
 *
 * Descripci√n: datos de un perro
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
