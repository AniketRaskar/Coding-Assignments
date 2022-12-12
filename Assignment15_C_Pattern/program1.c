/*
Input: Row:4,Col=4
Output: 1   2   3   4
        5   6   7   8
        9   1   2   3   
        4   5   6   7
*/
#include<stdio.h>
void Display(int Row,int Col)
{
    static int iNo = 1;
    for(int i=1;i<=Row;i++)
    {
        for(int j=1;j<=Col;j++,iNo++)
        {
            if(iNo>9)
            {
                iNo =1;
            }
            printf("%d\t",iNo);
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