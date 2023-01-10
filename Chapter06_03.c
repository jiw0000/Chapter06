#include <stdio.h>

int main()
{
	char chs[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int start_ch = 'F';
	int cnt;

	for (int i = 0; i < 26; i++)
		if (chs[i] == start_ch)
			cnt = i;


	for (int i = 0; i <= cnt; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("%c", chs[cnt - j]);
		printf("\n");
	}


}