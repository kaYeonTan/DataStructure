#include "stdio.h"

//재귀함수
//자기자신을 호출하는 함수
void Recursive()
{
	printf("함수 호출\n");
	Recursive();
}

void Recursive2(int num)
{
	if (num <= 0) return;
	printf("함수 호출 : %d\n", num);
	Recursive2(num-1);
}

//팩토리얼
//5! = 5*4*3*2*1 = 120
int Factorial(int num)
{
	if (num <= 0) return 1;
	else return num * Factorial(num - 1);

	//printf("함수 호출 : %d\n", num);
	//Recursive2(num - 1);
}

//피보나치
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