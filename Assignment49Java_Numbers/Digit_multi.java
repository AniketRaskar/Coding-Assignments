//accept the number from user and find the multiplication of digits in the number
import java.lang.*;
import java.util.*;

class Digit_multi
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        NumberX nobj = new NumberX(iNo);
        int iRet =nobj.Multi_digit();
        System.out.println("Multiplication of digits of the number "+iNo +" is "+iRet);
    }
}

class NumberX
{
    private int iValue;
    NumberX(int iNo)
    {
        iValue = iNo;
    }
    int Multi_digit()
    {
        int iDigit=0,iMulti=1;
        while(iValue != 0)
        {
            iDigit = iValue%10;
            iValue = iValue/10;
            iMulti = iMulti * iDigit;
        }
        return iMulti;
    }
}