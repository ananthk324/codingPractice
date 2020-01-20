#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void Enqueue(int x) 
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x; 
	temp->next = NULL;
	if(front == NULL && rear == NULL)
	{
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}

void Dequeue() 
{
	struct Node* temp = front;
	if(front == NULL) 
	{
		printf("Queue is Empty\n");
		return;
	}
	if(front == rear) 
		front = rear = NULL;
	else
		front = front->next;
	free(temp);
}

int Front()
{
	if(front == NULL) 
	{
		printf("Queue is empty\n");
		return;
	}
	return front->data;
}

void Print() {
	struct Node* temp = front;
	printf("\n");
	while(temp != NULL) 
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
}

int main()
{
	Enqueue(3);
	Enqueue(5);
	Enqueue(6);
	Print();

	Dequeue();
	Print();

	Enqueue(8);
	Print();

	return 0;
}