#include "main.h"



void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, \n", *(a + i));
	}
}
