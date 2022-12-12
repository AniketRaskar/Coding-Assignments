//accept N numbers from the user and the range and display numbers within range.

import java.lang.*;
import java.util.*;

class Dis_within_range
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

        System.out.println("Enter the starting point of range:");
        int iStart = sobj.nextInt();

        System.out.println("Enter the ending point of range:");
        int iEnd = sobj.nextInt();

        NumberX nobj = new NumberX();
        nobj.Display(Arr,iStart,iEnd);
        
    }
}
class NumberX
{
    void Display(int Arr[],int start,int end)
    {
        System.out.println("Elements within range are:");
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i] >start && Arr[i]<end)
            {
              System.out.println(Arr[i]);
            }
        }
    }
}