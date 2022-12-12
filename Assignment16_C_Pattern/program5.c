/*
input: row=4,col=4
output: 1   2   3   4
        1   *   *   4
        1   *   *   4
        1   2   3   4
*/
#include<stdio.h>
void Display(int Row,int Col)
{
    int iNo=0;
    for(int i=1;i<=Row;i++)
    {
        for(int j=1,iNo=1;j<=Col;j++,iNo++)
        {
            if((i==1)||(j==1)||(j==Col)||(i==Row))
            {
                printf("%d\t",iNo);
            }
            else
            {
                printf("#\t");
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