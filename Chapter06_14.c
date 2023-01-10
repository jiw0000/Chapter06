#include <stdio.h>


int main()
{
	double num1[8], num2[8];
	int i, j;

	for (i = 0; i < 8; i++)
	{
		scanf_s("%lf", &num1[i]);

		for (j = 0, num2[i] = num1[i]; j < i; j++)
			num2[i] += num1[j];
	}

	for (i = 0; i < 8; i++)
		printf("%8.3f ", num1[i]);
	printf("\n");

	for (i = 0; i < 8; i++)
		printf("%8.3f ", num2[i]);
	printf("\n");


}