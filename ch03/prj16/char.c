﻿#include	<stdio.h>

int main(void)

{
	char c1 = 'a';
	char c2 = 65;
	char c3 = '\132';
	char c4 = '\x5A';

	printf("ÀúÀå°ª(¹®ÀÚ): %C %C %C %C\n", c1, c2, c3, c4);
	printf("ÀúÀå°ª(Á¤¼ö): %d %d %d %d\n", c1, c2, c3, c4);


	return 0;
}