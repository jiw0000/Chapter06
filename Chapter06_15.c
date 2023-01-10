#include <stdio.h>

int main()
{
	char str[257];
	int cnt;

	for (cnt = 0; scanf("%c", &str[cnt]) && str[cnt] != '\n'; cnt++);

	for (int i = cnt - 1; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");

}