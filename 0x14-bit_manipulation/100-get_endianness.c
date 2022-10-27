#include "main.h"

/**
 *get_endianness - checks the endianness
 *
 *Return: if there is a big-endian return - 0
 *else if there is little-endian return -1
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
