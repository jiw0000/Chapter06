#include <stdio.h>

int main()
{
	int fri = 5;
	int week;

	for (week = 1; fri <= 150; week++)
	{
		fri -= week;
		fri *= 2;

		printf("%d주 친구 수는  %d이다.\n", week, fri);
	}
}
