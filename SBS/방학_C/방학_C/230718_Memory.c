#include "stdlib.h"
#include "stdio.h"

int main()
{
	int* num_pointer1;
	void* num_pointer2;
	int num1 = 1;

	num_pointer1 = &num1;
	num_pointer2 = malloc(sizeof(int));
	//num_pointer2 = 15;

	printf("%p\n", num_pointer1);
	printf("%p\n", num_pointer2);
	printf("%d\n", num_pointer2);

	free(num_pointer2);

	//������ ������ ���, �ش� ������ ���ÿ� �ش�Ǵ� �޸� ������ ������
	//malloc �Լ��� �޸𸮸� �Ҵ��ϸ� �� ������ �޸𸮸� �Ҵ���

	//NULL pointer : �ش� �ּҿ� ���� ���� ��쿡 ���
	int* num_pointer3 = NULL;
	printf("%p\n", num_pointer3);

	//�ּҿ� �ش�Ǵ� ������ �� ����� ���
	if (num_pointer3 == NULL)
	{
		//�� ������ float��ŭ�� ����� �Ҵ�����
		num_pointer3 = malloc(sizeof(int));
		printf("%p\n", num_pointer3);
	};
}
