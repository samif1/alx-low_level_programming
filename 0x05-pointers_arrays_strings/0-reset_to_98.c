#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	*n = 98;
	return n;
}
int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	printf("n=%d\n", n);
	reset_to_98(p);
	printf("n=%d\n", n);
    	return (0);
}
