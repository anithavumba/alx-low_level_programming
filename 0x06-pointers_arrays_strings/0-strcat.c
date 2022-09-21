#include "main.h"

/**
 * _strcat - function that concatnates two strings dest and src
 * @dest: first string
 * @src: second string
 * Return: a pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p;


	while (*(dest + i) != '\0')
		i++;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);

}
