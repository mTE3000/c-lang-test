#include<stdio.h>

int main(void)
{
	int a = 2, b = 8; //a�������� 2���ʱ�ȭ, b�������� 8�� �ʱ�ȭ
	int d[2] = {2, 3}; //d��������(�迭)

	printf("%d, %d \n", a, b); // a,b���
	printf("%d, %d, %d \n",d[0],d[1],d[0]+d[1]); //d[0](2), d[1](3), d[0]+d[1](2+3) ���

	return 0;
}

