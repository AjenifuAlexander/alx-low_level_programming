#include<unistd.h>

/**
 * main - Enrty point
 *
 * Description: Print a code using right function ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return 1 (Error).
*/


int mani(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);

}
