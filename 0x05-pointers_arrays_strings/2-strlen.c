#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String lenght
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	Return (c);
}
