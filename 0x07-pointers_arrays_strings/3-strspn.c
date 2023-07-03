#include "main.h"

/**
 * _strspn - gents length of a prefix substring
 * @s: String searched on
 * @accept: characters used in test
 *
 * Return: Initial segment of s containing accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, k, flag, i;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				k++;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}
	return (0);
}
