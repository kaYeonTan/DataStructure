#include < stdio.h>

typedef struct _wallet	//���� �� ���� �Ϻθ��� ������� ǥ���� ����
{
	int coin100Num;		//100��¥�� ������ ��
	int bill500Num;		//5,000��¥�� ������ ��

	int TakeOutMoney(Wallet* pw, int coinNum, int billNum);
	void PutMoney(Wallet* pw, int coinNum, int billNum);
} Wallet;

int main(void)
{
	Wallet myWallet; //���� ����

	//PutMoney(&myWallet, 5, 10); //���� �ִ´�.  

	//ret = TakeOutMoney(&myWallet, 2, 5); //���� ������.
}