#include <stdio.h>

int
factorial(int n)
{
	if (n < 1) return 1;
	int prod = 1;
	for (int i = n; i >= 2; --i) {
		prod *= i;
	}
	return prod;
}

int
main(void)
{
	printf("Factorial of 3 is %d.\n", factorial(3));
	return 0;
}
