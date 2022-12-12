/*
Input: Row =3, col =4
Output:  1  2   3   4
         5  6   7   8
         9  10  11  12
       
*/
#include<stdio.h>

void Display(int Row,int Col)
{
    static int no =1;
    for(int i=1;i<=Row;i++)
    {
        for(int j=1;j<=Col;j++,no++)
        {
            printf("%d\t",no);
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