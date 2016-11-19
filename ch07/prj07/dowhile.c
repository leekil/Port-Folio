#include <stdio.h>
#define MAX 20
int main(void)
{
	int input;

	do
	{
		printf("정수 또는 0(종료)을 입력: ");
		scanf("%d", &input);
	} while (input != 0);
	puts("종료합니다.");




	return 0;
}