//accept N numbers from the user and find product of all odd elements
import java.lang.*;
import java.util.*;

class product_odd_ele
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

        NumberX nobj = new NumberX();
        int iRet =nobj.Odd_product(Arr);
        System.out.println("Product of odd elements is: "+iRet);
        
    }
}
class NumberX
{
    int Odd_product(int Arr[])
    {
        int iMulti =1;
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i] %2==1)
            {
              iMulti = iMulti * Arr[i]; 
            }
        }
        return iMulti;
    }
}