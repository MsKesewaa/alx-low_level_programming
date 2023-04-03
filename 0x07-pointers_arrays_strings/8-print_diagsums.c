#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int b, isum = 0, jsum = 0;

	for (b = 0; b < size; b++)
	{
		isum += a[(size + 1) * b];
		jsum += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", isum, jsum);
}
