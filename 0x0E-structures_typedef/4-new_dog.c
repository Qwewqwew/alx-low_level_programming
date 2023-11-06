#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of s
*/
int _strlen(const char *s)
{
int i = 0;
while (*s++)
i++;
return (i);
}
/**
 * _strcpy - Returns @dest with a copy of a string for @src
 * @src: string to copy
 * @dest: destination
 * Return: @dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct pointer dog or NULL on fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcpy(dog->name, name);
dog->age = age;
dog->owner = _strcpy(dog->owner, owner);
return (dog);
}
