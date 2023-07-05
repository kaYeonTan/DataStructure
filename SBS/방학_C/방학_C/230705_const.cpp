#include <iostream>
using namespace std;

int main()
{
	//숫자의 종류에는 변수, 상수
	//상수 : 변하지 않는 수를 가리키고, const라는 예약어를 앞에 붙인다.

	//따로 상수라고 언급하는 이유 : 나중에 코드를 누군가가 확인했을 때 손대지 마라고 명시하는 것
	const int num1 = 33;

	//변수는 const를 붙이지 않은 모든 '변수'가 해당된다.

	//출력 표기 : %d, %c, %s, 8진수, 16진수
	//출력 할 때, 특정 형식(10진수, 8진수, 16진수, 문자열 등)으로 출력하고 싶다면 해당 형식의 표현 범위에 맞춰서 출려해줘야 한다.

	printf("%d\n", num1);
	//printf("%c\n", num1);
	//printf("%s\n", num1);
	//printf("%o\n", num1);
	//printf("%x\n", num1);


	//정수 출력 표기 : int, long, long long 등이 있다.
	//부호표시 없는 정수 : unsigned

	unsigned int num2 = 2147483648;
	printf("%u", num2);




}