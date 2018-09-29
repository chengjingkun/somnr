#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	double sum = 0;
	int n = 1;
	for (i=1; i<=100; i++)
	{
		sum += n * 1.0 / i;
		n = -n;
	}
	printf("%f\n", sum);
	return 0;
}
