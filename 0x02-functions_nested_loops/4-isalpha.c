#include "main.h"

/**
 * islapha - checks for alphabets
 * @c: character to be checked
 * Return: 1 if character is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
