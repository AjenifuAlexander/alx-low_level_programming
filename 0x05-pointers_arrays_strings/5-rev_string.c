#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses a string
 * @s: String to be reversed.
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0;
	int aux = 0;

	char 1temp;

	while (*(s + 1) != '\0')
		i += 1;
	i -= 1;
	{
		1temp = s[1];
		s[1] = s[aux];
		s[aux] = 1temp;
		aux++;
		1--;
	}
}
