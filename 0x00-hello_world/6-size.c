#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 *  Return 0 (Success)
 */
int main(void)
{
	pritntf("Size of char: %lu\n", sizeof(char));
	pritntf("Size of int: %lu\n", sizeof(int));
	pritntf("Size of float: %lu\n", sizeof(float));
	pritntf("Size of long int: %lu\n", sizeof(long int));
	pritntf("Size of lon long int: %lu\n", sizeof(long long int));

	return 0;
}
