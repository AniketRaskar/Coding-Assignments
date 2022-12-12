//travel the LL and display addition of digits of element in it.
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
void DisReverseDigits(PNODE head)
{
    while(head != NULL)
    {
        int Reverse =0;
        int iDigit =0;
        while((head->data)!=0)
        {
            iDigit= (head->data)%10;
            Reverse = Reverse * 10 + iDigit;
            head->data = head->data/10;
        }
        printf("%d\t",Reverse);
        head = head ->next;
    }
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
    DisReverseDigits(first);

    return 0;
}