//travel the LL and return the second maximum element from it
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
int SecondMaxiEle(PNODE head)
{
    int fMax =0,sMax=0;
    while(head != NULL)
    {
       if((head->data)>fMax || ((head->data)>sMax))
        {
            if(head->data>fMax)
            {
                sMax = fMax;
                fMax = head->data;
            }
            else if(head->data>sMax)
            {
                sMax = head->data;
            }
        } 
        head = head ->next;
    }
    return sMax;
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,201);
    InsertFirst(&first,54);
    InsertFirst(&first,21);
    InsertFirst(&first,45);
    InsertFirst(&first,192);
    Display(first);
    int iRet =SecondMaxiEle(first);
    printf("Second maximum elements is:%d",iRet);

    return 0;
}