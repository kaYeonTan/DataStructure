#include "stdio.h"


int Sum(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }
//�Լ� - ������ - �迭
//�Լ� �����͵��� �迭�� �����
int main()
{
	int (*Calcul[4])(int, int);
	Calcul[0] = Sum;
	Calcul[1] = Sub;
	Calcul[2] = Mul;
	Calcul[3] = Div;
	for (int i = 0; i < 4; i++)
	{
		printf("�Լ������� �迭 [%d] : %p\n", i, Calcul[i]);
	}

	//����ȭ
	typedef int (*Calcue2)(int, int);
	Calcue2 Cal_Ver1 = Sum;
	//Cal_Ver1 = Sum;
	printf("����ȭ �ּ� : %p\n", Cal_Ver1);

	return 0;
}