#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* next;
} Node;

int main(void)
{
	Node* head = NULL;    // NULL ������ �ʱ�ȭ
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	head = (Node*)malloc(sizeof(Node));	//�߰��� ����, ���̳�� �߰�
	tail = head;						//�߰��� ����

	/**** �����͸� �Է� �޴� ���� ****/
	while (1)
	{
		printf("�ڿ��� �Է�: ");
		scanf("%d", &readData);
		if (readData < 1)
			break;

		/*** ����� �߰����� ***/
		newNode = (Node*)malloc(sizeof(Node));	//���(�ٱ���)�� ����
		newNode->data = readData;				//��忡 ������ ����
		newNode->next = NULL;					//����� next�� NULL�� �ʱ�ȭ

		//if (head == NULL)			//ù ��° �����!
		//{
		//	head = newNode;			//ù ��° ��带 head�� ����Ű�� ��
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

	/**** �Է� ���� �������� ��°��� ****/
	printf("�Է� ���� �������� ��ü���! \n");
	if (head == tail)
	{
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else
	{
		cur = head;						//cur�� ����Ʈ�� ù ��° ��带 ����Ų��.
		//printf("%d  ", cur->data);		//ù ��° ������ ���

		while (cur->next != NULL)		//����� ��尡 �����Ѵٸ�
		{
			cur = cur->next;			//cur�� ���� ��带 ����Ű�� �Ѵ�. 
			printf("%d  ", cur->data);	//cur�� ����Ű�� ��带 ����Ѵ�. 
		}
	}
	printf("\n\n");

	/**** �޸��� �������� ****/
	if (head == tail)
	{
		return 0;    // ������ ��尡 �������� �ʴ´�.
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		//printf("%d��(��) �����մϴ�. \n", head->data);
		//free(delNode);    // ù ��° ����� ����

		while (delNextNode != NULL)    // �� ��° ������ ��� ���� ���� �ݺ���
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d��(��) �����մϴ�. \n", delNode->data);
			free(delNode);    // �� ��° ������ ��� ����
		}
	}

	return 0;
}