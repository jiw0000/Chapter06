#include <stdio.h>

int main()
{
	int num[8];

	for (int i = 0; i < 8; i++)
		scanf_s("%d", &num[i]);

	for (int i = 7; i >= 0; i--)
		printf("%d ", num[i]);
	printf("\n");
}
