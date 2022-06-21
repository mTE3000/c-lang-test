#include<stdio.h>

int main(void)
{
	int a = 5; // a=5
	char b = 'A'; //b=A

	printf("%d 수원정보과학고 \n ", 1); // 1 수원정보과학고 출력
	printf("%d 컴퓨터전자과 \n", a); // 5 컴퓨터전자과 출력
	printf("%c 수원정보과학고 \n", b); // b 수원정보과학고 출력
	printf("%d 수원정보과학고 \n", b);  /*65 수원정보과학고 출력
									(A는 아스키코드로 65번, %d는 정수를 출력하므로 65를 출력)
									*/
	return 0;
}