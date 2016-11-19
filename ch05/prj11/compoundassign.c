#include	<stdio.h>

int main(void)
{
	int x = 5, y = 10;

	printf("두 정수를 입력 >> ", &x, &y);
	scanf("%d%d", &x, &y);

	printf("the addition is: %d\n", x += y);
	printf("x = %d, y = %d\n", x, y);
	printf("the subtraction is: %d\n", x -= y);
	printf("x = %d, y = %d\n", x, y);
	printf("the multiplication is: %d\n", x *= y);
	printf("x = %d, y = %d\n", x, y);
	printf("the division is: %d\n", x /= y);
	printf("x = %d, y = %d\n", x, y);
	printf("the reminder is: %d\n", x %= y);
	printf("x = %d, y = %d\n", x, y);
	printf("x *= x + y is: %d\n", x *= x + y);
	printf("x = %d, y = %d\n", x, y);

	return 0;

}