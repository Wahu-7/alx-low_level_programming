#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, m, y;

	for (x = 48; x < 58; x++)
	{
		for (m = 49; m < 58; m++)
		{
			for (y = 50; y < 58; y++)
			{
				if (y > m && m > x)
				{
					putchar(x);
					putchar(m);
					putchar(y);
					if (x != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

