#include<stdio.h>

int main(void)
{
	int a = 2, b = 8; //a변수선언 2로초기화, b변수선언 8로 초기화
	int d[2] = {2, 3}; //d변수선언(배열)

	printf("%d, %d \n", a, b); // a,b출력
	printf("%d, %d, %d \n",d[0],d[1],d[0]+d[1]); //d[0](2), d[1](3), d[0]+d[1](2+3) 출력

	return 0;
}

