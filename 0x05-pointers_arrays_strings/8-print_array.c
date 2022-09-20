#include "main.h"
#include<stdio.h>

/**
 * print_array - function prints n elements of an array of integers
 *
 *@a: pointer to char
 *@n: number of elements in array
 *
 * Return: 0 (success)
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		if (count == (n - 1))
		{
			printf("%d", *a);
			a++;
			count++;
		}
		else
		{
		printf("%d, ", *a);
		a++;
		count++;
		}
	}
	putchar('\n');
}
