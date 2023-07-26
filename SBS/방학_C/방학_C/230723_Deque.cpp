#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;

	//deque : double end queue -> d e que
	//삽입과 삭제가 앞 뒤로 가능하다.
	//인덱스가 있다

	//5 6 7 
	dq.push_back(5);
	dq.push_back(6);
	dq.push_back(7);

	//큐 방식
	//6 7 
	dq.pop_front();
	//4 6 7 
	dq.push_front(4);

	//인덱스 번호 접근 : 인덱싱
	cout << dq.at(1) << endl;

	cout << "초기화" << endl;
	dq.assign(dq.size(), 0);

	deque<int>::iterator iter = dq.begin();
	dq.insert(iter,77);


	while (!dq.empty())
	{
		cout << dq.front() << " ";
		dq.pop_front();
	};

	//size()도 있음

	//초기화 : assign(변수.size())	-> 0으로 초기화
	//초기화 : assign(변수.size(),3) -> 3으로 초기화

	//삽입 : dq.insert(idx, 요소);
	//삭제 : dq.erase(idx);


	return 0;
}