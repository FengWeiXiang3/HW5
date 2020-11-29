#include <stdio.h>
#include <stdlib.h>

int siz = 0;
int ten = 0;
int bas = 0;
int val = 0;
int k = 0;
int max = 0;
char rec[CHAR_MAX];
int arr[268435456];
int recurstveMaximum(int siz2, int num[]);

int main(void)
{
	printf("請輸入整數數量：\n");
	scanf_s("%d", &siz);
	printf("請輸入整數組，並使用,分隔：\n");
	scanf_s("%s", rec, CHAR_MAX);
	for (int i = 0; rec[i] != '\0'; i++)
	{
		if (rec[i + 1] == ',' || rec[i + 1] == '\0')
		{
			ten = 1;
			for (int j = i; j >= bas; j--)
			{
				arr[val] += (rec[j] - 48) * ten;
				ten *= 10;
			}
			val++;
			bas = i + 2;
		}
	}
	k = arr[siz - 1];
	max = recurstveMaximum(siz, arr);
	printf("%d\n", max);
	system("pause");
	return 0;
}

int recurstveMaximum(int siz2, int num[])
{
	if (siz2 == 1)
	{
		return k;
	}
	else if (num[siz2 - 2] > k)
	{
		k = num[siz2 - 2];
	}
	recurstveMaximum(siz2 - 1, num);
}