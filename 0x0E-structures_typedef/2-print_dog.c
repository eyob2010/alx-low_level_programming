#include"dog.h"
#include"stdlib.h"
#include"stdio.h"
void print_dog(struct dog *d)
{
	if ((d->name == NULL) && (d->age == '\0') && (d->owner == NULL))
	{
	}
	else if ((d->name == NULL) && (d->age != '\0') && (d->owner != NULL))
	{
		printf("Name: (nil)");
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner);
	}
	else if((d->name != NULL) && (d->age == '\0') && (d->owner != NULL))
	{
		printf("Name: %s", d->name);
		printf("Age: (nil)");
		printf("Owner: %s", d->owner);
	}
	else if((d->name != NULL) && (d->age != '\0') && (d->owner = NULL))
	{
		printf("Name: %s", d->name);
		printf("Age: %f", d->age);
		printf("Owner: (nil)");
	}
}
