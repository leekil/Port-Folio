#include	<stdio.h>

int main(void)
{
	printf("	1234567890\n");

	printf("%f %s\n", 123456.789, "\t%f");
	printf("%14.3f %s\n", 123456.789, "\t%10.3f");
	printf("%e %s\n", 123456.789, "\t%e");
	printf("%10.3E %s\n", 123456.789, "\t%10.3E");
	printf("%f %s\n", 12.34e-5, "\t%g");
	printf("%G %s\n", 1234.e-6, "\t%G");

	return 0;
}