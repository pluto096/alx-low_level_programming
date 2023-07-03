#include "main.h"
#include<stdio.h>

/**
 * *_strchr - locates charachter in a string
 * @c: charachter searched for
 * @s: string being searched
 *
 * Return: c if found and no otherwhise
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
