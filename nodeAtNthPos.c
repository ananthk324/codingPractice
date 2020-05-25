/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void Insert(int data, int pos) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    
    temp->data = data;
    temp->next = NULL;
    
    if(pos == 1) {
        temp->next = head;
        head = temp;
        return;
    }
    
    struct Node* temp1 = head;
    while(temp1->next != NULL) temp1 = temp1->next;
    
    temp1->next = temp;
    
    return head;
}

void Print(struct Node* head) {
    if(head == NULL) return;
    
    Print(head->next);
    
    printf("%d ", head->data);
}

int main()
{
    head = Insert(3, head);
    head = Insert(4, 2);
    head = Insert(7, 3);
    head = Insert(9, 1);
    
    Print(head);

    return 0;
}

