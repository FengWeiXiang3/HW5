#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int one;
	int two;
	int amo[13] = { 0 };

	srand(time(NULL));

	for (int i = 0; i <= 35999; i++)
	{
		one = 1 + rand() % 6;
		two = 1 + rand() % 6;
		++amo[one + two];
	}

	printf("點數\t次數\n");

	for (int i = 2; i <= 12; i++)
	{
		printf("  %2d\t%4d\n", i, amo[i]);
	}

	system("pause");
	return 0;
}