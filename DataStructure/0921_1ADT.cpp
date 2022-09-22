#include < stdio.h>

typedef struct _wallet	//동전 및 지폐 일부만을 대상으로 표현한 지갑
{
	int coin100Num;		//100원짜리 동전의 수
	int bill500Num;		//5,000원짜리 지폐의 수

	int TakeOutMoney(Wallet* pw, int coinNum, int billNum);
	void PutMoney(Wallet* pw, int coinNum, int billNum);
} Wallet;

int main(void)
{
	Wallet myWallet; //지갑 마련

	//PutMoney(&myWallet, 5, 10); //돈을 넣는다.  

	//ret = TakeOutMoney(&myWallet, 2, 5); //돈을 꺼낸다.
}