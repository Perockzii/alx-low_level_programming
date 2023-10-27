#include "main.h"
/**
 * clear_bit - sets the bit value to 0
 * @index: position to change bit to 0
 * @n: pointed to number
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;
	return (1);
}
