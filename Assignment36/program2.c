#include<stdio.h>
//write a program which print below pattern:
// OUTPUT: 1    2   3   4   5   

void Display()
{
    static int iCnt=1;
    if(iCnt<6)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
    Display();
}
int main()
{
    Display();
    return 0;

}