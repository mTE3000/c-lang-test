#include<stdio.h>

int main(void) {
	/*�� ���α׷��� �ϴ� ��
	* ����ڷκ��� b���� �Է¹ް� 
	* for������ b * i = b*i
	* ����� 9�� �ݺ�
	*/
	int b, i; //b,i ���� ����

	scanf_s("%d", &b); //b�� �Է¹���

	for(i=1;i<=9;i++) // i=1�� �ʱ�ȭ, i�� 9���ϸ� ����, �ѹ� �������� 1 �߰�;
		printf("%d x %d = %d \n", b,i, b * i); // b x i = b*i ���

	return 0;
}