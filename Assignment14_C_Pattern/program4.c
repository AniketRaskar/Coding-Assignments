/*
Input: Row =4, col =5
Output:  4  4   4   4   4
         3  3   3   3   3
         2  2   2   2   2
         1  1   1   1   1
       
*/
#include<stdio.h>

void Display(int Row,int Col)
{
    for(int i=Row;i>0;i--)
    {
        for(int j=1;j<=Col;j++)
        {
            printf("%d\t",i);
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