#include "main.h"
/**
 * _abs - a function to find the aboslute value of a number
 * @p: function parameter
 * Return: -p or p;
 */

int _abs(int p)
{
	if (p < 0)
		return (-p);
	else if (p >= 0)
	{
		return (p);
	}

	return (0);
}
