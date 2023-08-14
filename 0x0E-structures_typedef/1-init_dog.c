#include <dog.h>
/*
* init_dog - intialize the dog struct 
* @d: the dog intial
* @name: dog name
* @age: dog age in float
* @owner: dog owner name
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if(d != NULL)
    {
    d->name = name;
    d->age = age;
    d->owner = owner;
    }
}
