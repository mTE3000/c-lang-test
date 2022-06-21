#include<stdio.h>

int main(void){
	/*이 프로그램이 하는 일
	* 사용자로부터 a값을 입력받아
	* a * 1 = a*1 ... a * 9 = a*9
	* 출력
	*/
	
	int a; //a 변수선언

	scanf_s("%d", &a ); //a값 입력받기

	printf("%d x 1 = %d \n", a, a * 1); // a x 1 = a*1 출력
	printf("%d x 2 = %d \n", a, a * 2); // a x 2 = a*2 출력
	printf("%d x 3 = %d \n", a, a * 3); // .
	printf("%d x 4 = %d \n", a, a * 4); // .
	printf("%d x 5 = %d \n", a, a * 5); // .
	printf("%d x 6 = %d \n", a, a * 6); // .
	printf("%d x 7 = %d \n", a, a * 7); // .
	printf("%d x 8 = %d \n", a, a * 8); // .
	printf("%d x 9 = %d \n", a, a * 9); // .
	
	return 0;
}
