#include <stdio.h>

void square(int *x)
{
	*x = *x * *x;
}

void square_alt(int *x)
{
	/* x is a number that represents a memory address */

	/* asterisk before variable on RHS gets data from an address */
	int value = *x;

	int new_value = value * value;

	/* asterisk before variable on LHS replaces data at an address.
	 * the address stored in `x` does not change! */
	*x = new_value;
}

int main(void) {
	int x = 4;
	printf("x assigned to %d\n", x);

	/* &x gets the memory address (in the stack) where `x` is stored */
	printf("&x is %p\n", &x);

	int y = 42;
	printf("y assigned to %d\n", y);
	printf("&y is %p\n", &y);

	/* store the address of the stack variable `x` in p */
	int *p = &x;
	printf("p assigned to %p\n", p);

	printf("calling square(p)\n");
	square(p);
	printf("x is now %d\n", x);
	printf("p is still %p\n", p);

	printf("calling square(&x)\n");
	square(&x);
	printf("x is now %d\n", x);
	printf("p is still %p\n", p);

	return 0;
}
