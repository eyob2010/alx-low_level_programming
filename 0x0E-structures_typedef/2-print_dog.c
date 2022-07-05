#include"dog.h"
#include"stdlib.h"
#include"stdio.h"
void print_dog(struct dog *d)
{
	if ((d->name == NULL) && (d->owner == NULL))
	{
	}
	else if ((d->name == NULL))
	{
		printf("Name: (nil)");
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner);
	}
	else
	{
		printf("Name: (nil)");
   		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner);
	}
}
