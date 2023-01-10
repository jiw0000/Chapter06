#include <stdio.h>

#define INTE 8.0f

int main()
{
	long money = 1000000;
	int year = 0;

	while (money >= 0)
	{
		money -= 100000;
		money += money * (INTE / 100.0f);

		year++;
	}

	printf("\nyear : %d\n", year);

}