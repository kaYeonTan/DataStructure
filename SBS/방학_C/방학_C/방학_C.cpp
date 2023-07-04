#include <iostream>

int main()
{
    //데이터에는 여러가지 종류가 있지만 대표적인 데이터의 종류는 2가지가 있음
    //1. 숫자 : 정수, 실수, 복소수 등
    //2. 문자 : a,b,c,d,e,f ...
    //만약 내가 이러한 데이터를 출력하고 싶다면 printf()라는 함수를 써서 출력을 할 수 있다.
    //단, 출력시 문자열의 형태로 바꿔줘야 출력이 가능하다.
    //출력시 문자열 내에서 이스케이프 코드를 써서 줄바꿈 등 디테일한 설정을 할 수 있다. 
    printf("안녕하세요\n");
    printf("123456789\n");
    printf("%d\n", 123456789);

    //들여쓰기 : 해당 코드가 특정 문법에서만 실행되도록 명시해놓는 표기 방법
    //스페이스바 4번 or tab 한 번

    //변수
    //변수를 선언할 때는 자료형을 반드시 표기해줘야 한다. 자료형에 해당하는 데이터만 변수에 넣을 수 있다.
    //숫자 : 정수(int),  실수(float),  큰 정수(long),  큰 실수(double)
    //문자 : 문자(char),  문자열(str)
    //형태가 없을 경우 : void(포인터, 함수 반환)

    char num1 = -10;                //1바이트      2의 8승
    short num2 = 25000;             //2바이트      2의 16승
    int num3 = 12345678;            //4바이트      2의 32승
    long num4 = 12345678;           //4바이트      2의 32승
    long long num5 = 123456789789;  //8바이트      2의 64승

    printf("%d, %d, %d, %ld, %lld\n", num1, num2, num3, num4, num5);

    printf("====================================================\n");

    //오버플로우, 언더플로우

    char num6 = 129; //1바이트      2의 8승
    char num7 = -129;
    printf("오버플로우 : %d\n", num6); //만약 내가 자료형의 범위를 벗어나는 숫자를 변수에 넣으면?
    printf("언더플로우 : %d\n", num7); //만약 내가 자료형의 범위를 벗어나는 숫자를 변수에 넣으면?

    //오버플로우, 언더플로우 : 데이터가 변수의 자료형 크기를 벗어나는 일
    //그러면, 변수의 자료형의 크기는 어떻게 알 수 있을까?
    int num8 = 0;
    int size = sizeof(num8);
    printf("num8의 크기 : %d\n", size);
    printf("char의 크기 : %d\n", sizeof(char));
    printf("short의 크기 : %d\n", sizeof(short));
    printf("int의 크기 : %d\n", sizeof(int));
    printf("long의 크기 : %ld\n", sizeof(long));
    printf("long long의 크기 : %lld\n", sizeof(long long));
}