#include <stdio.h>

int square(int x)
{
	return x * x;
}

int main(void) {
	int x = 4;
	printf("x assigned to %d\n", x);

	printf("calling square(x) and reassigning x to the result\n");
	x = square(x);

	printf("x reassigned as %d\n", x);
	return 0;
}
