#include "stdio.h"

//�� ���� ���ڸ� �޾Ƽ� ���� ����� ��ȯ�ϴ� �Լ�
int Sum(int a, int b)
{
	return a + b;
}

void Introduce()
{
	printf("�ȳ��ϼ���\n");
}

int main()
{
	//�����ʹ� �ּҴ�
	printf("�Լ��� �ּ� : %p\n", &Sum);

	//�Լ��� �ּҸ� ����Ű�� ������ �����ϱ�
	int (*Sum_Pointer)(int a, int b);
	Sum_Pointer = Sum;
	printf("�Լ� �������� �ּ� : %p\n", Sum_Pointer);

	printf("%d\n", Sum(3, 4));
	printf("%d\n", Sum_Pointer(3, 4));

	//void
	void (*Intro)();
	Intro = Introduce;
	Intro();

	//�Լ�-������-�迭

	return 0;
}