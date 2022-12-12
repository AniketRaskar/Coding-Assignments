/*
Input: iRow:4 iCol:4

output: 1   2   3   4
            2   3   4
                3   4
                    4
*/
#include<stdio.h>
void Display(int iRow,int iCol)
{
    for(int i=1;i<=iRow;i++)
    {
      for(int j=1;j<=iCol;j++)
       {
        if(i<=j)
        {
            printf("%d\t",j);
        }
        else
        {
            printf(" \t");
        }
        }
        printf("\n"); 
    }
}
int main()
{
    int iRow=0,iCol=0;
    printf("Enter the number of rows:");
    scanf("%d",&iRow);

    printf("Enter the number of columns:");
    scanf("%d",&iCol);

    Display(iRow,iCol);
    return 0;
}