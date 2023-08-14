#include <stdio.lib>
#include "dog.h"
/*
* print_dog - Prints the dog struct
* @d: the dog struct pointer
* Return: void
*/
void print_dog(struct dog *d)
{
    if(d){
        if(d->name == NULL )
        {
            printf("Name: (nil)\n");
        }
        else
        {
            printf("Name: %s",d->name);
        }
         if(d->age == NULL )
        {
            printf("Age: (nil)\n");
        }
        else
        {
            printf("Age: %f",d->age);
        }
         if(d->owner == NULL )
        {
            printf("Owner: (nil)\n");
        }
        else
        {
            printf("Owner: %s",d->owner);
        }
    }
}
