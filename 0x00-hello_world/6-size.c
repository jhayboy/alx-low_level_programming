#include <stdio.h>

/**
 * main -print string in the put function
 *
 * Description: using the mian function
 * this progrsm prints 'the six=zes of everything we want it to print'
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size od=f a long int: %i byte(s)\n", sizeof(li));
	printf("Size of a long long int: %i byte(s)\n", sizeof(lli));
	printf("Size of a floa: %i byte(s)\n", sizeof(f));
	return (0);
}
