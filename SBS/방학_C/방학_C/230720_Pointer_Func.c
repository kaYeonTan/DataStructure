#include "stdio.h"

//두 개의 인자를 받아서 합한 결과를 반환하는 함수
int Sum(int a, int b)
{
	return a + b;
}

void Introduce()
{
	printf("안녕하세요\n");
}

int main()
{
	//포인터는 주소다
	printf("함수의 주소 : %p\n", &Sum);

	//함수의 주소를 가리키는 포인터 선언하기
	int (*Sum_Pointer)(int a, int b);
	Sum_Pointer = Sum;
	printf("함수 포인터의 주소 : %p\n", Sum_Pointer);

	printf("%d\n", Sum(3, 4));
	printf("%d\n", Sum_Pointer(3, 4));

	//void
	void (*Intro)();
	Intro = Introduce;
	Intro();

	//함수-포인터-배열

	return 0;
}