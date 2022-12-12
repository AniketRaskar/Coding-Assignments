/*
Input: Row =4, col =4
Output: A   B   C   D
        a   b   c   d
        A   B   C   D
        a   b   c   d
*/
#include<stdio.h>

void Display(int Row,int Col)
{
    char ch='\0';
    for(int i=1;i<=Row;i++)
    {
        if(i%2==0)
        {
            for(int j=1,ch='a';j<=Col;j++,ch++)
            {
                printf("%c\t",ch);
            }

        }
        else
        {
            for(int j=1,ch='A';j<=Col;j++,ch++)
            {
                printf("%c\t",ch);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iCol=0,iRow=0;
    printf("Enter the Number of rows:");
    scanf("%d",&iRow);

    printf("Enter the number of colunms:");
    scanf("%d",&iCol);

    Display(iRow,iCol);
    return 0;
}