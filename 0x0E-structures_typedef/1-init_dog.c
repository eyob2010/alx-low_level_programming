#include"stdlib.h"
#include"dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dd;
	d = &dd;
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
