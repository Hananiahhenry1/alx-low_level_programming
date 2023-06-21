#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description - creating a new dog struct
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
