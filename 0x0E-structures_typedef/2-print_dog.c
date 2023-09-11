#include "dog.h"
#include "stdio.h"
/**
 * print_dog - A function that prints a struct dog
 * @d: the dog to be printed
*/
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner : "(nil)");
}
}
