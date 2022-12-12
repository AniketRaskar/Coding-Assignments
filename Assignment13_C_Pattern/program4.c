/*
input: iRow=3       iCol=4
output: *   #   *   #
        *   #   *   #
        *   #   *   #
*/

#include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>0;j--)
        {
           if((j%2)==0)
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
    int iValue1 =0,iValue2=0;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}