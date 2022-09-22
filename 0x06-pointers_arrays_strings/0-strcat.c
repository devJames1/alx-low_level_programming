#include "main.h"

/**
 *_strcat - fucntion concatenates two strings
 *
 *@src: pointer to char
 *@dest: pointer to char
 *
 *Return: 0 (success)
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;
	int n = _strlen(src);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
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
