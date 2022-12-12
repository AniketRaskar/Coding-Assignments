/*
Input: Row:4,Col=4
Output: 2   4   6   8   10
        1   3   5   7   9
        2   4   6   8   10
        1   3   5   7   9
*/
#include<stdio.h>
void Display(int Row,int Col)
{
    int iNo = 0;
    for(int i=1;i<=Row;i++)
    {
        if(i%2==0)
        {
            for(int j=0,iNo=1;j<=Col;j++,iNo+=2)
            {
                printf("%d\t",iNo);
            }
        }
        else
        {
            for(int j=0,iNo=2;j<=Col;j++,iNo+=2)
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