#include <stdio.h>

int main(void) {

	/*�� ���α׷��� �ϴ� ��
	* ����ڷκ��� b���� �Է¹ް�
	* for������ b * c = b*c
	* ����� 9�� �ݺ�
	* test4.cpp���� �����̸��� i���� c�� �ٲ�
	*/
	int b, c; // ���� b,c ����

	scanf_s("%d", &b); //b�� �Է¹ޱ� 

	for (c = 1; c <= 9; c++) //c=1�ʱ�ȭ, c�� 9�����϶��� ����, c�� 1 ����
		printf("%d x %d = %d \n", b, c, b * c); //b * c = b*c ���

	return 0;
}



