#include <iostream>

void main()
{
	//실수 : float
	//실수 자료형의 크기는 얼마인가?
	printf("%d\n", sizeof(float)); //10의-38승 ~ 10의+38승
	printf("%d\n", sizeof(double));//10의-308승 ~ 10의+308승

	//지수 표기법 : 아주 큰 숫자나 작은 숫자를 표기할 때 쓰는 방법
	//10(-38) -> e-38
	//10(4) -> e+4
	//4000 -> 4*e+3
}