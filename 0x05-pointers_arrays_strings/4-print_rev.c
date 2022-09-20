#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new li ne.
 *
 *@s: string to be reversed
 *
 *Retutn: 0 (success)
 */


void print_rev(char *s)
{
	int l = _strlen(s);
	int cnt = l - 1;

	while (cnt >= 0)
	{
		_putchar(s[cnt]);
		cnt--;
	}

	_putchar('\n');
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
