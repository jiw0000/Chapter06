#include <stdio.h>

int main()
{
	int num1, num2, sum;

	printf("������ ���Ѱ� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);

	while (num1 < num2)
	{
		sum = 0;
		for (int i = num1; i <= num2; i++)
			sum += i * i;

		printf("%d���� %d����, �������� ���� %d\n",
			(num1 * num1), (num2 * num2), sum);

		printf("���� ���Ѱ� ������ �Է��Ͻÿ� : ");
		scanf_s("%d %d", &num1, &num2);
	}

	printf("����!\n");

}