#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses a string
 * @s: String to be reversed.
 * Return: void.
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[1];
		s[1] = s[counter];
		s[counter] = rev;
	}
}
