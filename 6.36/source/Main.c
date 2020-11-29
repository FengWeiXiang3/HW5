#include <stdio.h>
#include <stdlib.h>

char arr[CHAR_MAX];
int arg = 0;
void stringReverse(char cha[]);

int main(void)
{
	printf("½Ð¿é¤J¤@¦ê¦r²Å¡G\n");
	scanf_s("%s", arr, CHAR_MAX);
	stringReverse(arr);
	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(char cha[])
{
	for (int i = 0; i <= CHAR_MAX - 1; i++)
	{
		if (cha[i + 1 + arg] == '\0')
		{
			printf("%c", cha[i]);
			arg++;
			if (i == 0)
			{
				arg = -1;
			}
			stringReverse(cha);
		}
		if (arg == -1)
		{
			break;
		}
	}
}