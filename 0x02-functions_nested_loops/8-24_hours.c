#include "main.h"
/**
 * jack_bauer- starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int a, b, x, y;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
				for (x = 0; x <= 5; x++)
				{
					for (y = 0; y <= 9; y++)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(x + '0');
						_putchar(y + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
