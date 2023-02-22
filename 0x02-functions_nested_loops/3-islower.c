#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *@a: Checks if lowercase
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}
