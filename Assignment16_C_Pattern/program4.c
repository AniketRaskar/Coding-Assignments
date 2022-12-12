/*
input: row=6,col=5
output: #   #   #   #   #
        #   *   *   *   #
        #   *   *   *   #
        #   *   *   *   #
        #   *   *   *   #
        #   #   #   #   #
*/
#include<stdio.h>
void Display(int Row,int Col)
{
    for(int i=1;i<=Row;i++)
    {
        for(int j=Col;j>0;j--)
        {
            if((i==1)||(j==1)||(j==Col)||(i==Row))
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
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