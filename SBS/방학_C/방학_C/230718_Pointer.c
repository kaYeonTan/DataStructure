#include <stdio.h>

void main()
{
	int num = 1;
	printf("%p\n", num);

	int* numP;
	int num1 = 10;
	numP = num1;

	printf("%p\n", num1);
	printf("%p\n", numP);

	//������ ������ : 
	int *num_Pointer2;
	int  num2 = 20;

	num_Pointer2 = &num2;
	*num_Pointer2 = 20;

	puts("\n");

	printf("%p\n", num2);
	printf("%p\n", num_Pointer2);
	printf("%d\n", *num_Pointer2);

	/*
	[����]
	num1 : ����, �޸� �ּҸ� ���� ��� ����
	&num1 = �ּ� �������̸�, num1�̶�� �ϴ� ������ �޸� �ּҸ� ����
	*num_pinter : ������ ����, �޸𸮿� ����� ���� ����, ���� ��ȯ
	*/

	int* num_pointer3;
	int num3 = 30;

	num_pointer3 = &num3;
	*num_pointer3 = 20;

	printf("\n%d\n", *num_pointer3);
	printf("%d\n", num3);

	//void *pointer
	//���ݱ��� �ߴ� �ڷ��� �����ʹ� ��������
	//�ٸ� �ڷ��� �����ͷ� �����ϸ�? �޸� �ּҿ� �ش� �ڷ��� ũ�⸸ŭ ����
	//�ڷ����� �������� �ʾƼ� � ������ ���� �� ������ �����ͷθ� ������ ����
	//��, �����δ� ������ �Ұ����ϴ�.
	//�ڷ����� ���� �� �����
}