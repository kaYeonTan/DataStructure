#include "stdio.h"

//��������
int a;
int b;

//��������
//static�̶�� Ű����� ����� ����
//���������� ���������� Ư¡�� ��� ������ �ִ�.
//�������� : Ư�� �Լ� �������� ������ �����ϴ�.
//�������� : �� ���� �ʱ�ȭ ��, ���α׷��� ����Ǿ�� �������.

void StaticVar(void)
{
	static int cnt = 1;
	printf("static�Լ��� %d�� ȣ��Ǿ����ϴ�=========.\n", cnt);
	cnt++;
};
void localVar(void)
{
	int cnt = 1;
	printf("locla�Լ��� %d�� ȣ��Ǿ����ϴ�.\n", cnt);
	cnt++;
};

void RegisterVar(void)
{
	//�������� ���� : ���������� ������ ������ CPU �������� �޸𸮿� ����ȴ�.
	//���� : ������.
	//���� : ū ���� �����ϱ� ��ư�, ū ���� �����ϴ� ��� C������ ���������� ����ȴ�.
	register int cnt = 1;
	printf("register�Լ��� %d�� ȣ��Ǿ����ϴ�.\n", cnt);
	cnt++;
};


int main()
{
	//a = 5;
	//b = 3;
	//printf("%d %d\n", a, b);

	for (int i = 0; i <= 10; i++)
	{
		localVar();
		StaticVar();
		RegisterVar();
	};

	//�Լ� ȣ�� ��� : ���
	//�Լ� ������ �ڱ� �ڽ��� ȣ���ϴ� ���

}