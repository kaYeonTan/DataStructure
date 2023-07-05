#include <iostream>
using namespace std;

int main()
{
	//문자 자료형 :  char, short, string
	//unsigned : 부호가 없다 = 양수
	// char : -128 ~ 127 <-> unsigned char : 0 ~ 255

	//컴퓨터는 2진법(0, 1)로 센다.
	//컴퓨터가 문자를 인식하는 과정 : 문자 -> 십진법 -> 이진법
	//문자에서 십진법으로 바꾸는 과정에 해당되는 규칙 : 아스키 코드

	//문자는 따옴표로 표시한다.
	char alpha = 'a';
	//문자열은 쌍따옴표로 표시한다.
	short beta = 'ab';

	char s1 = 'a';
	char s2 = 'A';

	printf("%c: %d\n", s1, s1);
	printf("%c: %d\n", s2, s2);

	//아스키 코드 연산
	printf("%c: %d\n", s1+1, s1+1);
	printf("%c: %d\n", s1-2, s1-2);

	//대표적인 이스케이프 코드
	//\n : 개행
	//\r : 줄의 끝에서 시작위치로 돌아간다.
	//\t : 탭

	//알파벳 a를 변수로 선언한 후 대문자 A로 출력하기
	char ch = 'b';
	int temp = 'a' - 'A';
	printf("%c\n",ch - temp);
}