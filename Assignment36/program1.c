#include<stdio.h>
//Write a recursive program which display below pattern
// OUTPUT:   *  *   *   *   *   

void Display()
{
    static int iCnt=0;
    if(iCnt<5)
    {
         printf("*\t");
        
        iCnt++;
    }
     Display();
   

}
int main()
{
    Display();
    return 0;
}