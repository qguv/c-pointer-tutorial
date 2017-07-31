#include <stdio.h>
#include <stdlib.h>

int *new_int(void)
{
	/* allocate enough space on the heap to store one integer */
	int *hp = malloc(sizeof(int));

	/* store 42 in the space we just allocated */
	*hp = 42;

	return hp;
}

int main(void)
{
	int *hp;
	hp = new_int();
	printf("hp is %p and *hp is %d\n", hp, *hp);
	free(hp);
	return 0;
}
