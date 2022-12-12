//search first occurance of the perticular element and return the position of it.
#include <stdio.h>
#include <stdlib.h>

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
int SmallestNo(PNODE head)
{
    int iSmall =0;
    if(head != NULL)
    {
    iSmall = head->data;
    }
    else
    {
        return -1;
    }
    while(head != NULL)
    {
        if(head ->data < iSmall)
        {
            iSmall = head->data;
        }
        head = head ->next;
    }
    return iSmall;
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,151);
    Display(first);
    int iRet = SmallestNo(first);
    if(iRet == -1)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Smallest number is : %d",iRet);
    }
    return 0;
}