//travel the LL and display perfect iNo from it
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
void DisplayPerfect(PNODE head)
{
    
    while(head != NULL)
    {
        for(int iCnt =2;iCnt<=(head->data/2);iCnt++)
        {
            if(head->data %iCnt ==0)
            {
                printf("%d\t",head->data);
                break;
            }
        }
        head = head ->next;
    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,151);
    Display(first);
    DisplayPerfect(first);

    return 0;
}