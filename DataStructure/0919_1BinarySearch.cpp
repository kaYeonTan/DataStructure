#include <stdio.h>

int BinarySearsh(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last) //-1의 반환은 탐색 실패를 의미.
		return -1;

	mid = (first + last) / 2; //탐색 대상의 중앙

	if (ar[mid] == target) //탐색된 타겟의 인덱스 번호 반환
		return mid;
	else if (target < ar[mid]) //target이 ar[mid]보다 작다면 앞쪽을 탐색해야 한다. 
		return BinarySearsh(ar, first, mid - 1, target); //때문에 last 자리에 `mid-1`이 들어간다.
	else
		return BinarySearsh(ar, mid + 1, last, target);
}

int main()
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BinarySearsh(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타켁 저장 인덱스: %d \n", idx);

	idx = BinarySearsh(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타켁 저장 인덱스: %d \n", idx);

	return 0;

}