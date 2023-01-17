#include<stdio.h>
#include"dog.h"
#include<stdio.h>
/**
 * init_dog - initialize dog struct
 *
 * @d: struct dog
 * @name: dog name
 * @age:  dog age
 * @owner: dog owner
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
