#include <stdio.h>

int main()
{
	int num1, num2, sum;

	printf("정수로 하한과 상한을 입력하시오: ");
	scanf_s("%d %d", &num1, &num2);

	while (num1 < num2)
	{
		sum = 0;
		for (int i = num1; i <= num2; i++)
			sum += i * i;

		printf("%d부터 %d까지, 제곱들의 합은 %d\n",
			(num1 * num1), (num2 * num2), sum);

		printf("다음 하한과 상한을 입력하시오 : ");
		scanf_s("%d %d", &num1, &num2);
	}

	printf("종료!\n");

}