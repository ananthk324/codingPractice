#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data,int n)
{
   struct Node* temp1 = (struct Node*)malloc(sizeof(temp1));
   temp1->data = data;
   temp1->next = NULL;
   if(n == 1)
   {
       temp1->next = head;
       head = temp1;
       return;
   }
   
   struct Node* temp2 = head;
   for(int i = 0; i<n-2; i++)
   {
   temp2 = temp2->next;
   }
   temp1->next = temp2->next;
   temp2->next = temp1;
}

void Print()
{
   struct Node* temp = head;
   printf("\n");
   while(temp != NULL )
   {
       printf("%d ",temp->data);
       temp = temp->next;
   }
}

int main()
{
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Print();
    return 0;
}
