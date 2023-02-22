#include <stdio.h>


	/**
	 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
	 *        separated by a comma followed by a space.
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
		int counter;
		unsigned long f1 = 0, f2 = 1, sum;


		for (counter = 0; counter < 50; counter++)
		{
			sum = f1 + f2;
			printf("%lu", sum);


			f1 = f2;
			f2 = sum;


			if (counter == 49)
				printf("\n");
			else
				printf(", ");
		}


		return (0);
	}

