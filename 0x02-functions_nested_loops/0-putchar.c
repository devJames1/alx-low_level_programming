#include "main.h"

/**
* main - program prints _putchar
*
* return: Always 0 (success)
*/

int main (void)
{
	int n = 0;
	char pc_str[] = "-putchar";

	while (n < 8)
	{
		_putchar(pc_str[n]);
		n += 1;

	}
	_putchar('\n');

	return (0);
}
