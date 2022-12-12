#include<stdio.h>
bool ChkVowel(char *str)
{
    int iCnt=0;
    while (*str!='\0')
    {   
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            iCnt++;
        }
        str++;
    }
    if(iCnt==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
    
int main()
{
    char Arr[20];
    bool bRet=false;
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    bRet=ChkVowel(Arr);
    if(bRet==true)
    {
        printf("String Contains Vowel\n");

    }
    else
    {
        printf("String do not contain Vowel");
    }
    return 0;

}