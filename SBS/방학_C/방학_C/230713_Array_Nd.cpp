#include "stdio.h"

void main()
{
	int array_1d[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int array_2d[3][4] = 
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%02.d ", array_1d[i][j]);
		};
		puts("\n");
	};
	puts("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%02.d ", array_2d[i][j]);
		};
		puts("\n");
	};
}