#include <iostream>
using namespace std;

int main()
{
	int num1 = 1;
	int num2 = 2;

	printf("%d\n", num1 + num2);

	num1 = num1 + 1; //���Կ���
	printf("%d\n", num1);

	num2 += 1; //���Կ���
	printf("%d\n", num2);
}