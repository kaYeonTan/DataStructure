#include "stdio.h"

//����Լ�
//�ڱ��ڽ��� ȣ���ϴ� �Լ�
void Recursive()
{
	printf("�Լ� ȣ��\n");
	Recursive();
}

void Recursive2(int num)
{
	if (num <= 0) return;
	printf("�Լ� ȣ�� : %d\n", num);
	Recursive2(num-1);
}

//���丮��
//5! = 5*4*3*2*1 = 120
int Factorial(int num)
{
	if (num <= 0) return 1;
	else return num * Factorial(num - 1);

	//printf("�Լ� ȣ�� : %d\n", num);
	//Recursive2(num - 1);
}

//�Ǻ���ġ
//
int Fibo(int n)
{
	printf("%d ", n);
	if (n == 1 || n == 2) return 1;
	else return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
	//Recursive2(5);
	printf("%d\n", Factorial(3));
	printf("\n%d", Fibo(4));
}