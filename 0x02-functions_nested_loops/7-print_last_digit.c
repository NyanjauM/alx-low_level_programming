#include "main.h"

/**
 * print_last_digit - prints th last digit of a number
 * @n: number to evaluate
 *
 * Return: value of the last digit of the number
 */
int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 10)
{last = last * -1;
}
_putchar(last + '0');
return (last);
}
