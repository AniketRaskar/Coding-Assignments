//accept the number from user and count the even digits in it.
import java.lang.*;
import java.util.*;

class Cnt_even
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        NumberX nobj = new NumberX(iNo);
        int iRet =nobj.CountEven();
        System.out.println("Number of even digits in the number "+iNo +" are "+iRet);
    }
}

class NumberX
{
    private int iValue;
    NumberX(int iNo)
    {
        iValue = iNo;
    }
    int CountEven()
    {
        int iCnt=0,iDigit=0;
        while(iValue != 0)
        {
            iDigit = iValue%10;
            iValue = iValue/10;
            if(iDigit %2 ==0)
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}