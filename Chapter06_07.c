#include <stdio.h>
#include <string.h>

int main()
{
	char str[10];
	int len;

	scanf("%s", str);

	len = strlen(str);

	for (int i = len; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");


}