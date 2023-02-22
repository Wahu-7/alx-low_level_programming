#include <stdio.h>


	/**
	 * main - fibonacci <3
	 *
	 * Purpose - no hardcode
	 *
	 * Return:  (Success)
	 */


	int main(void)
	{
		unsigned long int x;
		unsigned long int bef = 1;
		unsigned long int aft = 2;
		unsigned long int y = 1000000000;
		unsigned long int bef1;
		unsigned long int bef2;
		unsigned long int aft1;
		unsigned long int aft2;


		printf("%lu", bef);


		for (x = 1; x < 91; x++)
		{
			printf(", %lu", aft);
			aft += bef;
			bef = aft - bef;
		}


		bef1 = (bef / y);
		bef2 = (bef % y);
		aft1 = (aft / y);
		aft2 = (aft % y);


		for (x = 92; x < 99; ++x)
		{
			printf(", %lu", aft1 + (aft2 / y));
			printf("%lu", aft2 % y);
			aft1 = aft1 + bef1;
			bef1 = aft1 - bef1;
			aft2 = aft2 + bef2;
			bef2 = aft2 - bef2;
		}
		printf("\n");
		return (0);
	}

