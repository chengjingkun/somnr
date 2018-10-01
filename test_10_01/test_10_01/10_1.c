#include<stdio.h>
#include<Windows.h>
int main()
{
	printf("Please Enter<lines>");
	int lines = 0;
	scanf_s("%d", &lines);
	int i = 0;
	int j = 0;
	for (; i < lines; i++){//�ϰ벿
		for (j = 0; j < lines - 1 - i; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++){
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < lines - 1; i++){
		for (j = 0; j < i + 1; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * (lines - 1 - i) - 1; j++){
			printf("*");
		}
		printf("\n");

	}
	system("pause");
	return 0;
}