#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 * main - 'prints the alphabet without q and e'
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	for (1 = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	Return (0);
}
