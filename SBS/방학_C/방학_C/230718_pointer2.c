#include "stdio.h"

//���� ������ : �ּ��� �ּ�
//���� ��� : �ڷ��� **�������̸�

void main()
{
	int* num_pointer1;
	int** num_pointer2;
	int num1 = 10;

	num_pointer1 = &num1;
	num_pointer2 = &num_pointer1;

	printf("%d\n", *num_pointer2);
	printf("%d\n", **num_pointer2);

	//�����ʹ� �޸� �ּҸ� �����ϴ� �뵵�̱� ������ �ּҸ� ���� ���� ���·� �����ϸ� �ȵȴ�.
	int* num_pointer3 = 0x200; //�ּҰ� ��ü�� ������ �� ������ 
	printf("\n%d\n", *num_pointer3); //�ּҰ� �߸��Ǹ� ���� ������� �ʴ´�.




}