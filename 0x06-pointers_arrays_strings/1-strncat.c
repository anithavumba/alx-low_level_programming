#include "main.h"

/**
 * _strncat - function that concatinates two strings dest and src, then n is the size of src
 * @dest: pointer to dest array 
 * @src: string to be appended
 * @n: maximum number of characters to be appended
 *Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char src[];
	char dest[];
	char *ptr;

	putchar("%s\n", src);
	putchar("%s\n", dest);

	ptr = _strncat(dest, src, n);

	putchar("%s", ptr);

		return (0)
}

