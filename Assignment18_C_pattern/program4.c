/*
Input: iRow:6 iCol:6

output: *   *   *   *   *   *
        *   #   #   #   *   *
        *   #   #   *   &   *
        *   #   *   &   &   *
        *   *   &   &   &   *
        *   *   *   *   *   *
*/
#include<stdio.h>
void Display(int iRow,int iCol)
{
    for(int i=iRow;i>0;i--)
    {
      for(int j=1;j<=iCol;j++)
      {
        if((i==j)||(i==1)||(j==1)||(i==iRow)||(j==iCol))
        {
            printf("*\t");
        }
        else if(i<j)
        {
            printf("#\t");
        }
        else
        {
            printf("&\t");
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