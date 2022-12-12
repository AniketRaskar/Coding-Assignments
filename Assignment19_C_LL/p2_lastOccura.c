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
int SearchLastOccur(PNODE head,int iNo)
{
    if(head ==NULL)
    {
        return -1;
    }
    int iPos =0;
    int iPos1 =0;
    while(head != NULL)
    {
        iPos++;
        if(head->data==iNo)
        {
            iPos1 = iPos;
        }
        head = head->next;
    }
    if(iPos1 == 0)
    {
        return -1;
    }
    else
    {
        return iPos1;
    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,11);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);
    Display(first);
    int iRet = SearchLastOccur(first,11);
    if(iRet == -1)
    {
        printf("There is no element in the linkedlist\n");
    }
    else
    {
        printf("Element occurs firstly at position %d ",iRet);
    }

    return 0;
}