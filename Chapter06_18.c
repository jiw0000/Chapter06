#include <stdio.h>

int main()
{
	int fri = 5;
	int week;

	for (week = 1; fri <= 150; week++)
	{
		fri -= week;
		fri *= 2;

		printf("%d�� ģ�� ����  %d�̴�.\n", week, fri);
	}
}
