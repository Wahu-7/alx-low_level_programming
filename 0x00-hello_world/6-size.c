#include <stdio.h>
/**
 * main - print sizes of data types in c
 * Return:0
 */
int main(void)
{
	int i;
	long int li;
	long long int x;
	char c;
	float f;

	printf("The size of a char is: %d byte(S)\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %d byte(S)\n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %d byte(S)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int is: %d byte(S)\n", (unsigned long)sizeof(x));
	printf("The size of a float is: %d byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
