#include <stdio.h>

int *new_int(int value)
{
	int x = value;
	return &x;
}

int main(void)
{
	int *p;
	p = new_int(42);
	new_int(20);
	new_int(420);
	printf("p is %p and *p is %d\n", p, *p);
	return 0;
}
