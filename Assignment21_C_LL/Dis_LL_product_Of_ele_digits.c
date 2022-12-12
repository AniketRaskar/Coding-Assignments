//travel the LL and display pallindrome number in it
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
void DisLLDigitsProduct(PNODE head)
{
    while(head != NULL)
    {
        int Product =1;
        int iDigit =0;
        int temp = head->data;
        while((head->data)!=0)
        {
            iDigit= (head->data)%10;
            Product *= iDigit;
            head->data = head->data/10;
        }
        printf("%d\t",Product);
        head = head ->next;
    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,54);
    InsertFirst(&first,21);
    InsertFirst(&first,44);
    InsertFirst(&first,152);
    Display(first);
    DisLLDigitsProduct(first);

    return 0;
}