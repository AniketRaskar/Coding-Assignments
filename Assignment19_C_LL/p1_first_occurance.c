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
int SearchFisrtOccur(PNODE head,int iNo)
{
    int iPos =0;
    while(head != NULL)
    {
        iPos++;
        if(head->data==iNo)
        {
            break;;
        }
        head = head->next;
    }
    if(head == NULL)
    {
        return -1;
    }
    else
    {
        return iPos;
    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);
    Display(first);
    int iRet = SearchFisrtOccur(first,141);
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