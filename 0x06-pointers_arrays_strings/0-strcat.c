#include "main.h"

/**
 * _strcat - function that concatnates two strings dest and src
 * @dest: first string
 * @src: second string
 * Return: a pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	char dest;
	char src;

	strcat(dest, src);

	putchar("Concatinated string: %s\n", dest);

	return (dest);
}
