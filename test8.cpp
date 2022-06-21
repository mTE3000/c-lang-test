#include <stdio.h>

int main(void) {

	/*이 프로그램이 하는 일
	* 사용자로부터 b값을 입력받고
	* for문으로 b * c = b*c
	* 출력을 9번 반복
	* test4.cpp에서 변수이름만 i에서 c로 바뀜
	*/
	int b, c; // 변수 b,c 선언

	scanf_s("%d", &b); //b값 입력받기 

	for (c = 1; c <= 9; c++) //c=1초기화, c가 9이하일때만 실행, c에 1 더함
		printf("%d x %d = %d \n", b, c, b * c); //b * c = b*c 출력

	return 0;
}



