//accept the number from user and count the number of digits within the range.
import java.lang.*;
import java.util.*;

class Cnt_Range
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        NumberX nobj = new NumberX(iNo);
        int iRet =nobj.CountRange();
        System.out.println("Number of digits between 3 and 7 in the number "+iNo +" are "+iRet);
    }
}

class NumberX
{
    private int iValue;
    NumberX(int iNo)
    {
        iValue = iNo;
    }
    int CountRange()
    {
        int iCnt=0,iDigit=0;
        while(iValue != 0)
        {
            iDigit = iValue%10;
            iValue = iValue/10;
            if(iDigit>3 && iDigit <7)
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}