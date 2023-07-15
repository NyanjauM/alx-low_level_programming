#include <stdlib.h>
#include <stdio.h>

/**
 * main prints alphabets in lower case
 * Return:Always 0 (Success)
 *
 */
int main(void)
{
	char Alph_lower;

	for (Alph_lower = 'a'; Alph_lower = 'z'; Alph_lower++)
		putchar (Alph_lower);

	return (0);
}
