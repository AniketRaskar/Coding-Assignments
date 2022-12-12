/*
Input: Row:4,Col=4
Output: a   b   c   d   e
        1   2   3   4   5
        a   b   c   d   e
        1   2   3   4   5
        a   b   c   d   e
*/
#include<stdio.h>
void Display(int Row,int Col)
{
    int iNo = 0;
    char ch='\0';
    for(int i=1;i<=Row;i++)
    {
        if(i%2!=0)
        {
            for(int j=0,ch='a';j<=Col;j++,ch++)
            {
                printf("%c\t",ch);
            }
        }
        else
        {
            for(int j=1,iNo=1;j<=Col;j++,iNo++)
            {
                printf("%d\t",iNo);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iRow=0,iCol=0;
    printf("Enter the first number:");
    scanf("%d",&iRow);

    printf("Enter the number of columns:");
    scanf("%d",&iCol);

    Display(iRow,iCol);
    return 0;
}