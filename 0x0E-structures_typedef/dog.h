#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog's basic data info
 * @name:The First member
 * @age:The Second member
 * @owner:The Third member
 *
 * Description:A longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -this a typedef for struct dog
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif

