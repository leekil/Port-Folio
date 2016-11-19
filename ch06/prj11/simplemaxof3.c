#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int data = 5;


	


	switch (data){
	
	case 1: case 2: case 3:
		printf("%d월은 1사분기\n",data);
		break;

	case 4: case 5: case 6:
		printf("%d월은 2사분기\n", data);
		break;
	case 7: case 8: case 9:
		printf("%d월은 3사분기\n", data);
		break;
	case 10: case 11: case 12:
		printf("%d월은 4사분기\n", data);
		break;
	default :
		printf("노노", data);
		break;
	}
	return 0;
}