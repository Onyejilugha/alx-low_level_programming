#include "main.h"

/**
 * _isupper - test char for uppercase characters == TRUE
 * @c: int value to be tested
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && C <= 'z')
		return (1);
	else
		return (0);
}
