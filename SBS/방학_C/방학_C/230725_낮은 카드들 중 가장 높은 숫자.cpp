#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void main()
{
	int x, y = 0;
	cin >> x >> y;
	vector<vector<int>> v(x, vector<int>(y,0));
	vector<int> small(x, 0);

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			int temp;
			cin >> temp;
			v[i][j] = temp;
		};
	};

	for (int i = 0; i < x; i++)
	{
		int smallNum = v[i][0];
		small[i] = v[i][0];
		for (int j = 1; j < y; j++)
		{
			if (smallNum > v[i][j])
			{
				small[i] = v[i][j];
				smallNum = v[i][j];
			}
		};
	};
	
	sort(small.rbegin(), small.rend());
	cout << small[0];
}