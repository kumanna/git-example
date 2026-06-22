#include <stdio.h>
#include <stdlib.h>

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
main(int argc, char *argv[])
{
	int n = 3;
	printf("Factorial of %d is %d.\n", n, factorial(n));
	return 0;
}
