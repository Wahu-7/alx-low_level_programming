#include "main.h"
/**
 * _isalpha - Checks for alphabet
 * Return: 1 if alphabet, 0 if otherwise
 * @x: Checks if alphabet
 */
int _isalpha(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}
