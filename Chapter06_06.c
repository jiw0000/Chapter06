#include <stdio.h>

int main()
{
	int start, end;

	printf("���� �� : ");
	scanf_s("%d %d", &start, &end);

	for (int i = start; i <= end; i++)
	{
		printf("%d  %d  %d\n", i, (i * i), (i * i * i));
	}


}