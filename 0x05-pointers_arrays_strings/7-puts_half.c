#include "main.h"

/**
 * puts_half - function prints half of a string
 *
 *@str: char pointer to string
 *
 * Return: 0 (success)
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int y;

	if (len % 2 == 0)
	{
		y = len / 2;
	}
	else if (len % 2 != 0)
	{
		y = (len + 1) / 2;
	}
	for (; *(str + y) != '\0'; y++)
	{
		_putchar(*(str + y));
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
