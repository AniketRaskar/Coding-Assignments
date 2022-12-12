//accept N numbers from the user and find the difference between summation of even and odd numbers
import java.lang.*;
import java.util.*;

class Diff_sum_eve_odd
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the no of elements :");
        int Size = sobj.nextInt();

        ArrayX aobj = new ArrayX(Size);
        aobj.Accept();
        aobj.Display();
        int iRet = aobj.DifferenceX();
        System.out.println("Difference of even and odd terms of array is: "+iRet);

        aobj = null;
    }
}
class ArrayX
{
    private int Arr[];
    ArrayX(int iLength)
    {
        Arr = new int[iLength];
    }
    void Accept()
    {
        Scanner sobj= new Scanner(System.in);
        System.out.println("Enter the data elements:");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }
    void Display()
    {
        System.out.println("Elements of the array are: ");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }

    int DifferenceX()
    {
        int SEven=0,SOdd=0;
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]%2==0)
            {
                SEven = SEven + Arr[i];
            }
            else
            {
                SOdd = SOdd + Arr[i];
            }
        }
        return (SEven-SOdd);
    }
}