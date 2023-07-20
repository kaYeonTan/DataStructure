#include "stdlib.h"
#include "stdio.h"

int main()
{
	int* num_pointer1;
	void* num_pointer2;
	int num1 = 1;

	num_pointer1 = &num1;
	num_pointer2 = malloc(sizeof(int));
	//num_pointer2 = 15;

	printf("%p\n", num_pointer1);
	printf("%p\n", num_pointer2);
	printf("%d\n", num_pointer2);

	free(num_pointer2);

	//변수를 생성할 경우, 해당 변수는 스택에 해당되는 메모리 공간에 생성됨
	//malloc 함수로 메모리를 할당하면 힙 영역에 메모리를 할당함

	//NULL pointer : 해당 주소에 값이 없는 경우에 사용
	int* num_pointer3 = NULL;
	printf("%p\n", num_pointer3);

	//주소에 해당되는 공간이 텅 비었을 경우
	if (num_pointer3 == NULL)
	{
		//그 공간에 float만큼의 사이즈를 할당해줌
		num_pointer3 = malloc(sizeof(int));
		printf("%p\n", num_pointer3);
	};
}
