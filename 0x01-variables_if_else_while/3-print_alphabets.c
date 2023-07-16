#include <stdio.h>
#include <stdlib.h>
/**
 * program to print alphabets
 *
 * Main prints the alphabet in lowercase then uppercase
 *
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 **/
/*main prints alphabets*/
int main(void)
{	char l;
/*lowercase*/
	for (l = 'a'; l <= 'z'; l++)
	putchar(l);
/*UPPERCASE*/
	for (l = 'A'; l <= 'B'; l++)
	putchar(l);
	putchar('\n');
	return (0);
}
