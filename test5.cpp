#include<stdio.h>

int main(void) 
{
	/*이 프로그램이 하는 일
	* a+..+b를 출력 ex) a=1 b=5 > 1+2+3+4+5 출력
	*/
	int a = 2, b = 4, i, sum = 0;
	//a변수선언과 2로 초기화
	//b변수선언과 4로 초기화
	//i변수선언
	//sum 변수 선언과 0으로 초기화

	for (i = a; i <= b; i++) //i=a로 초기화, i가 b이하일때 실행, 한번 돌떄마다 i에 1더함
		sum += i; // sum에 sum + i 한 값 저장
	printf("i: %d, sum: %d \n", i, sum); // i: i, sum: sum 출력

	return 0;
}


