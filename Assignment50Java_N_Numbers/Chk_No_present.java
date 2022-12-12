//accept N numbers from the user and No and check wheather No is present in  that or not

import java.lang.*;
import java.util.*;

class Chk_No_present
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of elements you want to accpet:");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        System.out.println("Enter the numbers:");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter the number which we want to  chk:");
        int No = sobj.nextInt();

        NumberX nobj = new NumberX();
        boolean bRet =nobj.Chk_No(Arr,No);
        if(bRet == true)
        {
            System.out.println("Enterd number contains the given number.");
        }
        else
        {
            System.out.println("Enterd number does not contains the given number.");
        }

    }
}
class NumberX
{
    boolean Chk_No(int Arr[],int no)
    {
        boolean flag = false;
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i] == no)
            {
                flag = true;
            }
        }
        return flag;
    }
}