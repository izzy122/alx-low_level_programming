#include "main.h"

/**
 * swap_int - swaps the values of two numbers
 * @a: first number
 * @b: second number
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
