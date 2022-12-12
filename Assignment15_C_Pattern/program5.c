/*
Input: Row:4,Col=4
Output: 1   2   3   4
        2   3   4   5
        3   4   5   6   
        4   5   6   7
*/
#include<stdio.h>
void Display(int Row,int Col)
{
    int iNo = 0,k=0;
    for(int i=1;i<=Row;i++)
    {
        for(int j=1,k=i;j<=Col;j++,k++)
        {
            printf("%d\t",k);
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