#include "main.h"

/**
 * *_strcpy - copies the string pointed to src
 * @dest: pointer to ste of destination
 * @src: pointer str origin
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

while (*(src + len) != '\0')
{
	*(dest + len) = *(src + len);
	len++;
}
*(dest + len) = '\n';
return (dest);
}

