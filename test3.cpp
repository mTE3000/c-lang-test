#include<stdio.h>

int main(void){
	/*�� ���α׷��� �ϴ� ��
	* ����ڷκ��� a���� �Է¹޾�
	* a * 1 = a*1 ... a * 9 = a*9
	* ���
	*/
	
	int a; //a ��������

	scanf_s("%d", &a ); //a�� �Է¹ޱ�

	printf("%d x 1 = %d \n", a, a * 1); // a x 1 = a*1 ���
	printf("%d x 2 = %d \n", a, a * 2); // a x 2 = a*2 ���
	printf("%d x 3 = %d \n", a, a * 3); // .
	printf("%d x 4 = %d \n", a, a * 4); // .
	printf("%d x 5 = %d \n", a, a * 5); // .
	printf("%d x 6 = %d \n", a, a * 6); // .
	printf("%d x 7 = %d \n", a, a * 7); // .
	printf("%d x 8 = %d \n", a, a * 8); // .
	printf("%d x 9 = %d \n", a, a * 9); // .
	
	return 0;
}
