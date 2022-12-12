//travel the LL and display prime numbers from it
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next =NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        *head = newn;
    }
}
void Display(PNODE head)
{
    printf("Linked list is:\n");
    while(head != NULL)
    {
        printf("|%d|->",head->data);  
        head = head->next;  
    }
    printf("|NULL|\n");
}
int Count(PNODE head)
{
    int iCnt =0;
    while(head=NULL)
    {
        head = head->next;
        iCnt++;
    }
    return iCnt;
}
int AddiOfEvenNum(PNODE head)
{
    int iSum =0;
    while(head != NULL)
    {
       if((head->data)%2==0)
       {
        iSum = iSum + head->data;
       } 
        head = head ->next;
    }
    return iSum;
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,54);
    InsertFirst(&first,21);
    InsertFirst(&first,45);
    InsertFirst(&first,152);
    Display(first);
    int iRet =AddiOfEvenNum(first);
    printf("Addition of even elements is:%d",iRet);

    return 0;
}