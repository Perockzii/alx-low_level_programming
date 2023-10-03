#include <stdio.h>

/**
 * main - prints number of arguements
 * @argc: arguements count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
