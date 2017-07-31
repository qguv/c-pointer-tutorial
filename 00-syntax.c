/*
 * In C, the ampersand gets the memory address where a variable is stored, and
 * is responsible for bitwise AND. But the asterisk can mean five (!) different
 * things!
 */

int main(void)
{
	/* comment delimeter when used with forwardslash */
	/* <-- start and end --> */

	/* multiplication */
	int x = 4 * 8;

	/* declaring a pointer variable */
	int *p;
	p = &x;
	/* or, for convenience */
	int *p = &x;

	/* getting the value located at a memory address */
	int some_value = *p;
	void *vp;

	/* storing a value at a memory address */
	*p = 20;

	return 0;
}
