#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int p;
	char q;

	for (p = 0 ; p < 10 ; p++)
	{
		for (q = 'a' ; q <= 'z' ; q++)
			_putchar(q);
		_putchar('\n');
	}
}
