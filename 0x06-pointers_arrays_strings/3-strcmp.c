#include "main.h"

/**
 * _strcmp - function campares to strings s1 and s2
 * @s1: a string
 * @s2: a string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
