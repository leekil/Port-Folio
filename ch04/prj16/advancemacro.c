#include	<stdio.h>


#define MESSAGE


#define PI	3.141592
#define VOLUME(r)	(4 * PI * cube(r) / 3)
#define SQUARE(x)	((x) * (x))
#define CUBE(x)	(SQUARE(x) * (x))
#define MULT(x, y) ((x) * (y))

int main(void)
{
	double radius = 2.32;
	printf("반지름이 %2.lf인 구의 체적은 %.2lf 입니다.\n", radius, VOLUME(radius));
	printf("실수 %.2f의 제곱은 %2.f 입니다.\n", 4.29, SQUARE(4.29));
	printf("실수 %.2f의 제곱은 %2.f 입니다.\n", 3.0, CUBE(3.0));
	printf("실수 %.2f와 실수 %2.f의 곱은 %.2f입니다.\n", 2.78, 3.62, MULT(2.78, 3.62));

	puts(MESSAGE);


	return 0;


}


