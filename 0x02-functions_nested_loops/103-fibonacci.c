#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, i, j, x, sums;

	i = sums = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		x = i + j;
		i = j;
		j = x;
		if (x % 2 == 0 && x < 4000000)
		{
			sums += x;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
