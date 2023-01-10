#include <stdio.h>

int main()
{
	double plus, minus;
	int cnt, i;

	printf("Èù°è : ");
	scanf_s("%d", &cnt);

	while (cnt > 0)
	{
		for (i = 2, plus = minus = 1.0; i <= cnt; i++)
		{
			plus += ((double)i - 1) / (double)i;
			minus -= ((double)i - 1) / (double)i;
		}

		printf("%f\n%f\n", plus, minus);

		printf("ÇÑ°è : ");
		scanf_s("%d", &cnt);
	}

}