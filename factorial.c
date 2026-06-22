#include <stdio.h>
#include <stdlib.h>

int
factorial(int n)
{
	if (n < 1) return 1;
	int prod = 1;
	for (int i = n; i >= 2; --i) {
		prod *= i;
		printf("i = %d\n");
	}
	return prod;
}

int
main(int argc, char *argv[])
{
	int n = 3;
	if (argc > 1) {
		n = atoi(argv[1]);
	}
	printf("Factorial of %d is %d.\n", n, factorial(n));
	return 0;
}
