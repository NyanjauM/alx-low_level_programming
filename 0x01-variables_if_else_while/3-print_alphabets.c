#include <stdio.h>
#include <stdlib.h>
/**
 * Main prints the alphabet in lowercase then uppercase
 * Main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{	char l;

	for (l = 'a'; l <= 'z'; l++)
	putchar(l);
	for (l = 'A'; l <= 'Z'; l++)
	putchar(l);
	putchar('\n');

	return (0);
}
