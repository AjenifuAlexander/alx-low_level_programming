#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - 'Prints numbers from n to 98, separated by comma,
 * followed by space and number shold be printed in order
 * @n: input
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
		for (x = n; x > 98; x--)
			printf("%d", x);
	else
		for (x = n; n < 98; x++)
			printf("%d", x);
				printf("98\n");
}
