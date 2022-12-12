/*
Input: Row:5,Col=5
Output:  1   2   3   4   5
        -1  -2  -3  -4  -5
         1   2   3   4   5
        -1  -2  -3  -4  -5
         1   2   3   4   5
*/
#include<stdio.h>
void Display(int Row,int Col)
{
    int iNo = 0;
    for(int i=1;i<=Row;i++)
    {
        if(i%2==0)
        {
            for(int j=0,iNo=1;j<=Col;j++,iNo++)
            {
                printf("-%d\t",iNo);
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