#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: the length of s
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
/**
 * strcpy - copies a specific string
 * @i: pointer to the buffer to copy string
 * @j: string to be copied
 * Return: a pointer to i
*/
char *strcpy(char *i, char *j)
{
int l = 0, k;
while (j[l] != '\0')
l++;
for (k = 0; k < l; k++)
i[k] = j[l];
i[k] = '\0';
return (i);
}
/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the new dog on success or NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int l1, l2;
l1 = _strlen(name);
l2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (l1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (l2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
