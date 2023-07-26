#include <iostream>
#include <stack>
#include <queue>
using namespace std;


int main()
{
	#pragma region Stack
	//5-4-2-6

	stack<int> s;

	s.push(5);
	s.push(4);
	s.push(2);
	s.push(6);
	
	s.pop();

	//삽입 1 2 3
	s.push(1);
	s.push(2);
	s.push(3);

	cout << "스택 사이즈 : " << s.size() << endl;
	//스택의 최상단에 있는 노드 top()
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
	
	#pragma endregion

	cout << endl << "==================================================" << endl;

	#pragma region Queue
	//선입선출
	queue<int> q;
	
	q.push(5);
	q.push(4);
	q.push(2);

	//4 2
	q.pop();
	//4 2 1 2 3
	q.push(1);
	q.push(2);
	q.push(3);

	//2 1 2 3
	q.pop();

	cout << "큐 사이즈 : " << q.size() << endl; 
	cout << "큐 back : " << q.back() << endl;
	while (!q.empty())
	{
		cout << q.front() <<" ";
		q.pop();
	}
	#pragma endregion

	//size : 요소의 개수


	return 0;
}