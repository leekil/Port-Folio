#include	<stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("��Ʈ ������ ������ �� ������ �Է��ϼ���.\n");
	scanf("%d %d", &a, &b);
	printf("%3d & %3d ==> %3d\n", a, b, a & b);
	printf("%3d | %3d ==> %3d\n", a, b, a | b);
	printf("%3d ^ %3d ==> %3d\n", a, b, a ^ b);
	printf(" ~%3d ==> %3d\n", a, ~a);
	printf("%3d >> %3d ==> %3d\n", a, b, a >> b);
	printf("%3d << %3d ==> %3d\n", a, b, a << b);



	return 0;

}