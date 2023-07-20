#include "stdio.h"

//그리디(greedy)
//현재 상황에서 지금 당장 최선의 결과를 낼 수 있는 것들만 선택하는 방법
//장점 :  구현만 하면 된다.
//단점 : 이 결과가 이후에도 좋은 결과일지 확신할 수 없다.
//생각해볼 점 : 현재의 결과들이 모인 최종 결과가 최적의 해가 되어야 되는 상황일때만 그리디를 사용해야함


//거스름돈
//가게 운영 거스름돈(동전) 줌
//동전 종류 : 500 ,100, 50, 10
//손님에게 돌려줘야 하는 돈 N원을 입력받았을 경우 거슬러 줘야 하는 동전의 최소개수

void ChangeCoin(int coin)
{
	int coinType[4] = { 500, 100, 50, 10 };
	for (int i = 0; i < 4; i++)
	{
		int count = coin / coinType[i];
		coin %= coinType[i];
		printf("%d원 :  %d\n",coinType[i], count);
	}
}

int main()
{

	ChangeCoin(1110);
}