#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char az;
	int i;

	i = 0;

	while (i < 10)
	{
		az = 'a';
		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		_putchar('\n');
		i++;
	}
}
