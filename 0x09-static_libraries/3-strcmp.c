#include "main.h"

/**
 * *_strcmp - function compares two strings
 *
 *@s1: char pointer
 *@s2: char pointer
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	char *ps1 = s1;
	char *ps2 = s2;

	for (; *ps1 != '\0'; ps1++, ps2++)
	{
		if (*ps1 != *ps2)
		{
			return (*ps1 - *ps2);
		}
	}
	return (0);
}

/**
 *_strlen - returns the length of a string.
 *
 *@s: pointer to char
 *
 *Return: 0 (Success)
 */

int _strlen(char *s)
{
	char *_str = s;
	int cnt = 0;

	while (*_str != '\0')
	{
		cnt++;
		_str++;
	}

	return (cnt);
}
