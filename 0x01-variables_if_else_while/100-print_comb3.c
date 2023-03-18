#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all combinations of two digit numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				if (i < j && i != j)
				{
					putchar(i + '0');
					putchar(j + '0');
					if (i+j != '17')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
        putchar('\n');
        return (0);

}
