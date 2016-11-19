#include	<stdio.h>
#include	<float.h>

int main(void)
{
	printf("float ¹üÀ§: %e %e\n", FLT_MIN, FLT_MAX);
	printf("double ¹üÀ§: %e %e\n", FLT_MIN, FLT_MAX);
	printf("long double ¹üÀ§: %e %e\n", LDBL_MIN, LDBL_MAX);

	return 0;
}