#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @*s1: first string to be joined
 * @*s2: second string to be joined
 * @n: length of s2 to be appended on s1
 *
 * Return: Pointer of new memory allocated or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	
