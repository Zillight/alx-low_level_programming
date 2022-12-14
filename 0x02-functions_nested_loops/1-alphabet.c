#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void);
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);
	_putchar('\n');
}
