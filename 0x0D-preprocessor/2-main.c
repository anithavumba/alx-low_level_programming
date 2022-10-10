#include <stdio.h>
/**
 *main - the main function prints the name of the file program from where it was compiled
 *Return: upon success it should return always 0
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
