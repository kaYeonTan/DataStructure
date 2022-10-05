#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* next;
} Node;

int main(void)
{
	Node* head = NULL;    // NULL 포인터 초기화
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	head = (Node*)malloc(sizeof(Node));	//추가된 문장, 더미노드 추가
	tail = head;						//추가된 문장

	/**** 데이터를 입력 받는 과정 ****/
	while (1)
	{
		printf("자연수 입력: ");
		scanf("%d", &readData);
		if (readData < 1)
			break;

		/*** 노드의 추가과정 ***/
		newNode = (Node*)malloc(sizeof(Node));	//노드(바구니)에 생성
		newNode->data = readData;				//노드에 데이터 저장
		newNode->next = NULL;					//노드의 next를 NULL로 초기화

		//if (head == NULL)			//첫 번째 노드라면!
		//{
		//	head = newNode;			//첫 번째 노드를 head가 가리키게 함
		//	tail = newNode;
		//}
		//else
		//{
		//	newNode->next = head;
		//	head = newNode;
		//};

		tail->next = newNode;
		tail = newNode;
	}
	printf("\n");

	/**** 입력 받은 데이터의 출력과정 ****/
	printf("입력 받은 데이터의 전체출력! \n");
	if (head == tail)
	{
		printf("저장된 자연수가 존재하지 않습니다. \n");
	}
	else
	{
		cur = head;						//cur이 리스트의 첫 번째 노드를 가리킨다.
		//printf("%d  ", cur->data);		//첫 번째 데이터 출력

		while (cur->next != NULL)		//연결된 노드가 존재한다면
		{
			cur = cur->next;			//cur이 다음 노드를 가리키게 한다. 
			printf("%d  ", cur->data);	//cur이 가리키는 노드를 출력한다. 
		}
	}
	printf("\n\n");

	/**** 메모리의 해제과정 ****/
	if (head == tail)
	{
		return 0;    // 해제할 노드가 존재하지 않는다.
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		//printf("%d을(를) 삭제합니다. \n", head->data);
		//free(delNode);    // 첫 번째 노드의 삭제

		while (delNextNode != NULL)    // 두 번째 이후의 노드 삭제 위한 반복문
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d을(를) 삭제합니다. \n", delNode->data);
			free(delNode);    // 두 번째 이후의 노드 삭제
		}
	}

	return 0;
}