#include <stdlib.h>

int main(void)
{
	/* ask to allocate 1 MiB of heap */
	for (;;) malloc(1024 * 1024);
	return 0;
}
