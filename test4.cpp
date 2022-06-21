#include<stdio.h>

int main(void) {
	/*이 프로그램이 하는 일
	* 사용자로부터 b값을 입력받고 
	* for문으로 b * i = b*i
	* 출력을 9번 반복
	*/
	int b, i; //b,i 변수 선언

	scanf_s("%d", &b); //b값 입력받음

	for(i=1;i<=9;i++) // i=1로 초기화, i가 9이하면 실행, 한번 돌때마다 1 추가;
		printf("%d x %d = %d \n", b,i, b * i); // b x i = b*i 출력

	return 0;
}