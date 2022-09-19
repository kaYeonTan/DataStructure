#include <stdio.h>

int BinarySearsh(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last) //-1�� ��ȯ�� Ž�� ���и� �ǹ�.
		return -1;

	mid = (first + last) / 2; //Ž�� ����� �߾�

	if (ar[mid] == target) //Ž���� Ÿ���� �ε��� ��ȣ ��ȯ
		return mid;
	else if (target < ar[mid]) //target�� ar[mid]���� �۴ٸ� ������ Ž���ؾ� �Ѵ�. 
		return BinarySearsh(ar, first, mid - 1, target); //������ last �ڸ��� `mid-1`�� ����.
	else
		return BinarySearsh(ar, mid + 1, last, target);
}

int main()
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BinarySearsh(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	idx = BinarySearsh(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
	if (idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	return 0;

}