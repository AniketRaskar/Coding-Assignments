//pogram to accept the Division and print the time of exam according to the  division of student 

#include<stdio.h> 
void DisplaySchedule(char ChDiv)
{
    if(ChDiv=='A' || ChDiv=='a')
    {
        printf("Your Exam time is 7 AM \n");
    }
    else if(ChDiv=='B' || ChDiv=='b')
    {
        printf("Your Exam time is 8:30 AM \n");
    }
    else if(ChDiv=='C' || ChDiv=='c')
    {
        printf("Your Exam time is 9:20 AM \n");
    }
    else if(ChDiv=='D' || ChDiv=='d')
    {
        printf("Your Exam time is 10:30 AM \n");
    }
    else
    {
        printf("Please enter the valid Division");
    }
}
int main()
{
    char cValue='\0';
    printf("Enter the character \n");
    scanf("%c",&cValue);
    DisplaySchedule(cValue);
    return 0;

}