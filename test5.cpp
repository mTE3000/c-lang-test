#include<stdio.h>

int main(void) 
{
	/*�� ���α׷��� �ϴ� ��
	* a+..+b�� ��� ex) a=1 b=5 > 1+2+3+4+5 ���
	*/
	int a = 2, b = 4, i, sum = 0;
	//a��������� 2�� �ʱ�ȭ
	//b��������� 4�� �ʱ�ȭ
	//i��������
	//sum ���� ����� 0���� �ʱ�ȭ

	for (i = a; i <= b; i++) //i=a�� �ʱ�ȭ, i�� b�����϶� ����, �ѹ� �������� i�� 1����
		sum += i; // sum�� sum + i �� �� ����
	printf("i: %d, sum: %d \n", i, sum); // i: i, sum: sum ���

	return 0;
}


