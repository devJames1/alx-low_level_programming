#include "main.h"

/**
 *puts2 - function prints one char out of 2 of a string
 *
 *@str: pointer to char
 *
 *Return: 0 (success)
 */

void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(*str);
			str++;
			count++;
		}
		else
		{
			str++;
			count++;
		}
	}
	_putchar('\n');
}
