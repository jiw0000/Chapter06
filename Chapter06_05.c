#include <stdio.h>


int main()
{
	char chs[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char inputCh;
	int lineCnt = -1;

	while (lineCnt == -1)
	{
		printf("대문자를 입력하시오 : ");
		scanf(" %c", &inputCh);

		for (int i = 0; i < 26; i++)
			if (chs[i] == inputCh)
				lineCnt = i;
	}

	for (int i = 0; i <= lineCnt; i++)
	{
		for (int j = (i + 1); j <= lineCnt; j++)
			printf(" ");

		for (int j = 0; j <= i; j++)
			printf("%c", (chs[j]));

		for (int j = (i - 1); j >= 0; j--)
			printf("%c", (chs[j]));

		printf("\n");
	}


}