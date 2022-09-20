#include "main.h"

/**
 *rev_string - reverses a string.
 *
 *@s: char pointer
 *
 *Return: 0 (success)
 */

void rev_string(char *s)
{
	int l = _strlen(s);
	int cntr = l / 2;
	int cnt = 0;
	char ltemp;

	while (cnt < cntr)
	{
		ltemp = s[cnt];
		s[cnt] = s[l - cnt - 1];
		s[l - cnt - 1] = ltemp;
		cnt++;
	}
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
