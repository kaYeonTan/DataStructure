#include "stdio.h"

//이중 포인터 : 주소의 주소
//선언 방법 : 자료형 **포인터이름

void main()
{
	int* num_pointer1;
	int** num_pointer2;
	int num1 = 10;

	num_pointer1 = &num1;
	num_pointer2 = &num_pointer1;

	printf("%d\n", *num_pointer2);
	printf("%d\n", **num_pointer2);

	//포인터는 메모리 주소를 저장하는 용도이기 때문에 주소를 직접 값의 형태로 저장하면 안된다.
	int* num_pointer3 = 0x200; //주소값 자체를 저장할 순 있지만 
	printf("\n%d\n", *num_pointer3); //주소가 잘못되면 값이 저장되지 않는다.




}