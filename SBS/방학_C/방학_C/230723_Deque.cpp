#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;

	//deque : double end queue -> d e que
	//���԰� ������ �� �ڷ� �����ϴ�.
	//�ε����� �ִ�

	//5 6 7 
	dq.push_back(5);
	dq.push_back(6);
	dq.push_back(7);

	//ť ���
	//6 7 
	dq.pop_front();
	//4 6 7 
	dq.push_front(4);

	//�ε��� ��ȣ ���� : �ε���
	cout << dq.at(1) << endl;

	cout << "�ʱ�ȭ" << endl;
	dq.assign(dq.size(), 0);

	deque<int>::iterator iter = dq.begin();
	dq.insert(iter,77);


	while (!dq.empty())
	{
		cout << dq.front() << " ";
		dq.pop_front();
	};

	//size()�� ����

	//�ʱ�ȭ : assign(����.size())	-> 0���� �ʱ�ȭ
	//�ʱ�ȭ : assign(����.size(),3) -> 3���� �ʱ�ȭ

	//���� : dq.insert(idx, ���);
	//���� : dq.erase(idx);


	return 0;
}