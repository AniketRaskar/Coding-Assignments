//accept the number from user and count the even digits in it.
import java.lang.*;
import java.util.*;

class Cnt_Diff
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        NumberX nobj = new NumberX(iNo);
        int iRet =nobj.CountDiff();
        System.out.println("Difference between summation of even and odd digits of the no "+iNo +" is "+iRet);
    }
}

class NumberX
{
    private int iValue;
    NumberX(int iNo)
    {
        iValue = iNo;
    }
    int CountDiff()
    {
        int ESum=0,OSum=0,iDigit=0;
        while(iValue != 0)
        {
            iDigit = iValue%10;
            iValue = iValue/10;
            if(iDigit %2 ==0)
            {
                ESum = ESum + iDigit;
            }
            else
            {
                OSum = OSum + iDigit;
            }
        }
        return (ESum - OSum);
    }
}