#include "stdio.h"

//배열(Array) : 길이가 있는, 같은 타입의 요소의 집합
//요소 : 배열 안에 있는 값
//인덱스(index) : 배열 내의 요소의 위치, 0부터 시작하며, 양의 정수를 가짐
//배열로 할 수 있는 것 : 벡터(1d), 행렬(2d), 차원이 있는 데이터들을 만들 수 있음

//배열 선언 방법 : 타입 배열의 이름[배열의 길이]
//ex : int array[8]; 요소가 int가 들어가고 array라는 이름의 길이가 8인 배열을 선언
//배열을 선언만 한 상태에서는 쓰레기 값이 들어가 있음.
//배열을 사용하고 싶다면 초기화를 해야 한다.

int main()
{
	int score[5]; //국영수사과
	score[0] = 85;
	score[1] = 75;
	score[2] = 65;
	score[3] = 55;
	score[4] = 45;
	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		printf("%d점 ", score[i]);
	};
	puts("\n");
	//선언과 동시에 초기화
	int score2[5] = { 1,2,3,4,5 };
	for (int i = 0; i < sizeof(score2) / sizeof(int); i++)
	{
		printf("%d점 ", score2[i]);
	};
	puts("\n");
	//선언과 동시에 초기화2
	//C에서는 배열의 길이와 관련해서 오류 출력 안해줌
	//배열의 길이와 관련해서는 개발자가 체크를 해야하기 때문에
	//되도록이면 명시적으로 배열의 크기를 언급하는 편이 좋다.
	int score3[] = { 6,7,8,9,10 };
	for (int i = 0; i < sizeof(score3) / sizeof(int); i++)
	{
		printf("%d점 ", score3[i]);
	};
}