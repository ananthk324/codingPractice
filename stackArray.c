//Stack implementation using array

#include<stdio.h>

int A[100];
int top = -1;
 
void Push(int x) 
{
  	if(top == 99) 
	{
		printf("Error: stack overflow\n");
		return;
	}

	A[++top] = x;
}

void Pop() 
{
	if(top == -1)
	{
		printf("Error: No element to pop\n");
		return;
	}

	top--;
}

int Top() 
{
	return A[top];
}

int IsStackEmpty()
{
    if(top == -1) 
	return 1;
    return 0;
}
 
void Print() {
	printf("Stack: ");
	for(int i = 0;i <= top;i++)
		printf("%d ",A[i]);
	printf("\n");
}

int main() 
{	
	Push(3);
	Push(4);
	Push(10);
	Print();
	Pop();
	Print();
	Push(11);
	Print();
	return 0;
}