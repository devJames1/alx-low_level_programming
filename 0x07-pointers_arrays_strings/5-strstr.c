#include "main.h"

/**
 * *_strstr - function locates a substring
 *
 *@haystack: char * pointer
 *@needle: char * pointer
 * Return: pointer to located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack != '\0'; haystack++)
	{
		if (haystack[i] == needle[i])
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				return (haystack);
			}
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
