#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
while (s[i] != '\0') /*count character of string*/
	{
		i++;
	}

return (i);
}

/**
 * _strcpy - copy arrays
 * @src: array of elements
 * @dest: dest array
 * Return: dest
 */
char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

if (str == 0)
	{
return (NULL);
	}
_strcpy(dst, str);
return (dst);
}
