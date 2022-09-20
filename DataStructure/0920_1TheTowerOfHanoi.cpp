#include <stdio.h>

//from�� �����ִ� num���� ������ by�� ���� to�� �̵��Ѵ�.
void Hanoi(int num, char from, char by, char to)
{
	if (num == 1) printf("���� 1�� %c���� %c�� �̵� \n", from, to);
	else
	{
		Hanoi(num - 1, from, to, by); //3�ܰ� �� 1�ܰ�
		printf("���� %d��(��) %c���� %c�� �̵� \n", num, from, to); //3�ܰ��� 2�ܰ�
		Hanoi(num - 1, by, from, to);	//3�ܰ��� 3�ܰ�
	}
}

int main(void)
{
	//���� A�� ���� 3���� ���� B�� �����Ͽ� ���� C�� �ű��
	Hanoi(3, 'A', 'B', 'c');
	return 0;
}