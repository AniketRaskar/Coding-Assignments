/*
Input: Row =3, col =5
Output: A   A   A   A   A
        B   B   B   B   B
        C   C   C   C   C
       
*/
#include<stdio.h>

void Display(int Row,int Col)
{
    char ch='\0';
    for(int i=1,ch='A';i<=Row;i++,ch++)
    {
        for(int j=1;j<=Col;j++)
        {
            printf("%c\t",ch);
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