#ifndef _DOG_H_
#define _DOG_H_
/*
* struct dog - struct that has dog info
* @name: dog name
* @age: dog age in float
* @owner: dog owner name
* Description: it is a normal dog struct
*/
struct dog {
	char *name;
	float age;
	char *owner;
};
#endif
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
