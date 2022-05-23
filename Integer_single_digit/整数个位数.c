#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;
	scanf("%d", &q);
	if (q > 0 && q < 10)
	{
		printf("%d\n", q);
	}
	else
		printf("%d\n", q % 10);
	return 0;
}