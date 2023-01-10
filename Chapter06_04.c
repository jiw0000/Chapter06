#include <stdio.h>

int main()
{
	char chs[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int ch_num = 0;
	int line_cnt = 6;

	for (int i = 0; i < line_cnt; i++)
	{
		for (int j = 0; j <= i; j++, ch_num++)
			printf("%c", chs[ch_num]);
		printf("\n");
	}


}