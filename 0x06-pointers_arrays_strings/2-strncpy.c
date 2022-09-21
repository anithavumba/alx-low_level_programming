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
	char *dest[];
	char *src[] = '\0';
	int n;
for (i = 0; i < n; &&src[i] != '\0'; i++)
	dest[i] = src[i];
for (; i < n; i++)
	dest[i] = '\0';

return (dest);
