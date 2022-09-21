#include "main.h"

/**
 * _strncpy -function that copies a string to another string
 * @dest: arry src will be copied to
 * @src: the string to be copied
 * @n: number of character to be copied
 * Return: Return a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	if (src[i] == '\0')
	{
	for (j = i; j < n && dest[j] != '\0'; j++)
		dest[j] = '\0';
	break;
	}
	dest[i] = src[i];
	}
	return (dest);
}

