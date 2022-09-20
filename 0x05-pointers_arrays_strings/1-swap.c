#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 *
 *@a: int pointer to be swapped
 *@b: int pointrt to be swapped
 *
 *Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
