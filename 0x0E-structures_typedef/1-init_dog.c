#include"stdlib.h"
#include"dog.h"
/**
 *  *  * struct dog - a dog's info
 *   *  * @name: stores the dog name
 *    *  * @age: stores the dog's age
 *     *  * @owner: stores the owners name
 *      *      *
 *       *       * Description: records a dog's detail
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
