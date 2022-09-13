#include "main.h"

/**
* main - program prints _putchar
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;
	char pc_str[] = "_putchar";

	while (n < 8)
	{
		_putchar(pc_str[n]);
		n += 1;

	}
	_putchar('\n');

	return (0);
}
