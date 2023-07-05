#include <iostream>
#include <stdio.h> //scanf 함수가 이 헤더에 들어있음
using namespace std;

int main()
{
	//int num1 =0;
	//printf("정수입력 : ");
	//scanf("%d", &num1); //입력을 받은 수를 변수에 저장한다. //scanf_s는 vs cpp 전용함수
	//printf("출력 : %d\n", num1);

	//int num2 = 0, num3 = 0;
	//printf("정수 두 개입력 : ");
	//scanf("%d %d", &num2, &num3);
	//printf("출력 : %d, %d\n", num2, num3);
	//
	//float num4 = 0;
	//printf("실수 두 개입력 : ");
	//scanf("%f", &num4);
	//printf("출력 : %.2f\n", num4);

	//여러 개의 값을 입력받을 때, 문자의 경우 입력받지 못하는 경우가 발생한다.
	//이전 단계에서 값을 입력 받을 때, 입력 함수에서 값과 엔터를 친 후 값은 해당 변수에 입력 되었지만
	//엔터가 남아있어(잔여 버퍼)
	//해당 엔터가 다음 단계에서 문자열을 입력하라고 할 때, 해당 엔터가 문자열로 인식되어 들어갔기 때문에 입력이 엔터로 들어가서
	//강제로 스킵 되었다.
	//getchar를 사용해 잔여버퍼를 getchar에 넣어주거나
	//rewind(stdin)을 사용해 전부 초기화 해주면 된다.
	//getchar();
	//rewind(stdin);
	
	//getchar
	char ch1;// = getchar();
	char ch2;// = getchar();
	char ch3;// = getchar();
	printf("문자 입력 : ");
	scanf("%c %c %c", &ch1, &ch2, &ch3);
	printf("문자 출력 : %c %c %c\n", ch1, ch2, ch3);

	//<<버퍼 초기화 해주기>>
	//결론 : 사용자에게 정보를 입력받게 할 때는 한번에 한 개씩 입력하게 하던가
	//SDL을 무시하던가
	//문자 받을 때는 초기화 하기
}