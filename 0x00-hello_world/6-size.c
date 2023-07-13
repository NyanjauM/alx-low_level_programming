#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 *  Return 0: (Success)
 */
int main(void)
{
	printf("Size of char: %lu\n", sizeof(char));
	printf("Size of int: %lu\n", sizeof(int));
	printf("Size of float: %lu\n", sizeof(float));
	printf("Size of long int: %lu\n", sizeof(long int));
	printf("Size of long long int: %lu\n", sizeof(long long int));

	return 0;
}
