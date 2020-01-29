// Doubly Linked List using C
#include<stdio.h>
#include<stdlib.h>

struct Node  
{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;

struct Node* GetNewNode(int x) 
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int x) 
{
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) 
	{
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}

void InsertAtTail(int x) 
{
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) 
	{
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
}

void Print() 
{
	struct Node* temp = head;
	printf("Forward: ");
	printf("\n");
	while(temp != NULL) 
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
}

void ReversePrint() 
{
	struct Node* temp = head;
	if(temp == NULL) return;
	
	while(temp->next != NULL) 
	{
		temp = temp->next;
	}
	
	printf("\nReverse: ");
	while(temp != NULL) 
	{
		printf("%d ",temp->data);
		temp = temp->prev;
	}
}

int main() 
{
	head = NULL;
	
	InsertAtTail(3);
	InsertAtHead(7);
	InsertAtTail(4);
	Print();
	ReversePrint();
}
