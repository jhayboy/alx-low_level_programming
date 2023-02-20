#include <stdio.h>

/**
 * main -print string in the put function
 *
 * Description: using the mian function
 * this progrsm prints 'the six=zes of everything we want it to print'
 * Return: 0
 */

int main (void)
{
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a floa: %i byte(s)\n", sizeof(float));
	return (0);
}
