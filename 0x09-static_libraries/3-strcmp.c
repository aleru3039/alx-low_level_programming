#include "main.h"
/**
 * _strcmp - is a function that compares two strings
 * @s1: is the string that is compared
 * @s2: string to compare s1 with
 * Return: 0 when both strings are equal, < than 0 when s1 is less
 * than s2, and > than 0 when s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
