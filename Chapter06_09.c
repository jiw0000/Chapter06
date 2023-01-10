#include <stdio.h>

float cal(float n1, float n2)
{
	return (n1 - n2) / (n1 * n2);
}

int main()
{
	float n1, n2;
	while (scanf_s("%f %f", &n1, &n2) == 2)
	{
		printf("%f / %f = %f\n", (n1 - n2), (n1 * n2),
			(cal(n1, n2)));
	}

}
