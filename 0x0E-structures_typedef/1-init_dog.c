#include<stdio.h>
#include"dog.h"
#include<stdio.h>
/**
* init_dog - funtion to initialise a struct
* 
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}	
