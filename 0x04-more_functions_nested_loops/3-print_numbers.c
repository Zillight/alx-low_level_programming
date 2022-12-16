#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
