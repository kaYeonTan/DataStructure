#include <iostream>
using namespace std;

int main()
{
	//���� �ڷ��� :  char, short, string
	//unsigned : ��ȣ�� ���� = ���
	// char : -128 ~ 127 <-> unsigned char : 0 ~ 255

	//��ǻ�ʹ� 2����(0, 1)�� ����.
	//��ǻ�Ͱ� ���ڸ� �ν��ϴ� ���� : ���� -> ������ -> ������
	//���ڿ��� ���������� �ٲٴ� ������ �ش�Ǵ� ��Ģ : �ƽ�Ű �ڵ�

	//���ڴ� ����ǥ�� ǥ���Ѵ�.
	char alpha = 'a';
	//���ڿ��� �ֵ���ǥ�� ǥ���Ѵ�.
	short beta = 'ab';

	char s1 = 'a';
	char s2 = 'A';

	printf("%c: %d\n", s1, s1);
	printf("%c: %d\n", s2, s2);

	//�ƽ�Ű �ڵ� ����
	printf("%c: %d\n", s1+1, s1+1);
	printf("%c: %d\n", s1-2, s1-2);

	//��ǥ���� �̽������� �ڵ�
	//\n : ����
	//\r : ���� ������ ������ġ�� ���ư���.
	//\t : ��

	//���ĺ� a�� ������ ������ �� �빮�� A�� ����ϱ�
	char ch = 'b';
	int temp = 'a' - 'A';
	printf("%c\n",ch - temp);
}