#include "main.h"
/**
 * print_last_digit - print the last digit
 * @p: function parameter
 * Return: q
 */

int print_last_digit(int p)
{
	int q;

	q = p % 10;
	if (p < 0)
		q = -q;
	_putchar(q + '0');
	return (q);
}
