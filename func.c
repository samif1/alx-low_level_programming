#include <stdio.h>

int max(int a, int b)
	{
		if (a > b)
			return (a);
		else
			return (b);
	}
int main(void)
{
	int a = 200;
	int b = 400;
	int res = max(b, a);


	printf("the maximum value is %d", res);

	return (0);
}
