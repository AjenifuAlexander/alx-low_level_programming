#include "main.h"
/**
 * print_last_digit - 'Print the last digit of a number'
 * @l: the number to extract last digit from.
 *
 * Return: the value of the last digit.
 */

int print_last_digit(int l)
{
	int a;

	if (l < 0)
		l = -l;

	a = l % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
