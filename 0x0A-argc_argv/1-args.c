#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints number of arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
