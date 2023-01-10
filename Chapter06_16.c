#include <stdio.h>

#define SIMPLE_INTEREST 10.0f
#define COMPOUND_INTEREST 5.0f

int main()
{
	double daph = 100.0f;
	double deir = 100.0f;

	double dapnTotal = daph;
	double deirTotal = deir;

	int year = 0;

	while (dapnTotal >= deirTotal)
	{
		year++;

		dapnTotal += (daph * (SIMPLE_INTEREST / 100.0f));
		deirTotal += (deir * (COMPOUND_INTEREST / 100.0f));
		deir += (deir * (COMPOUND_INTEREST / 100.f));

		printf("%7.2f %7.2f\n", dapnTotal, deirTotal);
	}
	printf("\nyear : %d\n", year);


}