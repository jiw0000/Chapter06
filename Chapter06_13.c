#include <stdio.h>

int main()
{
	int num[8];

	num[0] = 2;
	for (int i = 1; i < 8; i++)
		num[i] = num[i - 1] * 2;

	int i = 0;
	do
	{
		printf("%d ", num[i]);
	} while (++i < 8);

	printf("\n");


}
