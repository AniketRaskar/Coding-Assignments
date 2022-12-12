//accept N numbers from the user and No and find the first occurance of the number

import java.lang.*;
import java.util.*;

class first_Occur
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
        int iRet =nobj.fistOccur(Arr,No);
        System.out.println("Number occours at the position "+iRet+" first");
        
    }
}
class NumberX
{
    int fistOccur(int Arr[],int no)
    {
        int i =0;
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i] == no)
            {
              break;  
            }
        }
        if(i == Arr.length)
        {
            i = -1;
        }
        return i;
    }
}