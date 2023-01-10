#include <stdio.h>

int main()
{
	float n1, n2;
	while (scanf_s("%f %f", &n1, &n2) == 2)
	{
		printf("%f / %f = %f\n", (n1 - n2), (n1 * n2),
			((n1 - n2) / (n1 * n2)));
	}

}