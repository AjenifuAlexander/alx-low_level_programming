#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: pointer to the string to check
 * Return: void
 */

int _strlen(char *s)
{
	int str = 0;

	while (s[str])
	str++;

	return (str);
}
