#include "stdio.h"

//전역변수
int a;
int b;

//정적변수
//static이라는 키워드로 선언된 변수
//지역변수와 전역변수의 특징을 모두 가지고 있다.
//지역변수 : 특정 함수 내에서만 접근이 가능하다.
//전역변수 : 한 번만 초기화 됨, 프로그램이 종료되어야 사라진다.

void StaticVar(void)
{
	static int cnt = 1;
	printf("static함수가 %d번 호출되었습니다=========.\n", cnt);
	cnt++;
};
void localVar(void)
{
	int cnt = 1;
	printf("locla함수가 %d번 호출되었습니다.\n", cnt);
	cnt++;
};

void RegisterVar(void)
{
	//레지스터 변수 : 지역변수와 같지만 저장이 CPU 레지스터 메모리에 저장된다.
	//장점 : 빠르다.
	//단점 : 큰 값을 저장하기 어렵고, 큰 값을 저장하는 경우 C에서는 지역변수로 선언된다.
	register int cnt = 1;
	printf("register함수가 %d번 호출되었습니다.\n", cnt);
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

	//함수 호출 방법 : 재귀
	//함수 내에서 자기 자신을 호출하는 방법

}