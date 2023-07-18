#include <stdio.h>

void main()
{
	int num = 1;
	printf("%p\n", num);

	int* numP;
	int num1 = 10;
	numP = num1;

	printf("%p\n", num1);
	printf("%p\n", numP);

	//역참조 연산자 : 
	int *num_Pointer2;
	int  num2 = 20;

	num_Pointer2 = &num2;
	*num_Pointer2 = 20;

	puts("\n");

	printf("%p\n", num2);
	printf("%p\n", num_Pointer2);
	printf("%d\n", *num_Pointer2);

	/*
	[정리]
	num1 : 변수, 메모리 주소를 몰라도 사용 가능
	&num1 = 주소 연산자이며, num1이라고 하는 변수의 메모리 주소를 구함
	*num_pinter : 역참조 연산, 메모리에 저장된 값에 접근, 값을 반환
	*/

	int* num_pointer3;
	int num3 = 30;

	num_pointer3 = &num3;
	*num_pointer3 = 20;

	printf("\n%d\n", *num_pointer3);
	printf("%d\n", num3);

	//void *pointer
	//지금까지 했던 자료형 포인터는 정수형임
	//다른 자료형 포인터로 선언하면? 메모리 주소에 해당 자료형 크기만큼 저장
	//자료형이 정해지지 않아서 어떤 변수든 넣을 수 있지만 포인터로만 선언이 가능
	//즉, 변수로는 선언이 불가능하다.
	//자료형을 숨길 때 사용함
}