#include <stdio.h>

//from에 꽂혀있는 num개의 원반을 by를 거쳐 to로 이동한다.
void Hanoi(int num, char from, char by, char to)
{
	if (num == 1) printf("원반 1을 %c에서 %c로 이동 \n", from, to);
	else
	{
		Hanoi(num - 1, from, to, by); //3단계 중 1단계
		printf("원반 %d를(을) %c에서 %c로 이동 \n", num, from, to); //3단계중 2단계
		Hanoi(num - 1, by, from, to);	//3단계중 3단계
	}
}

int main(void)
{
	//막대 A의 원반 3개를 막대 B를 경유하여 막대 C로 옮기기
	Hanoi(3, 'A', 'B', 'c');
	return 0;
}