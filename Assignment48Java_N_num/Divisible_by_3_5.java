//accept N numbers from the user and display numbers which are ddivisible 3 and 5
import java.lang.*;
import java.util.*;

class Divisible_by_3_5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the no of elements :");
        int Size = sobj.nextInt();

        ArrayX aobj = new ArrayX(Size);
        aobj.Accept();
        aobj.Display();
        aobj.Divisibility();
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

    void  Divisibility()
    {
        System.out.println("Numbers even and divisible by 5 & 3 are: ");
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]%5==0 || Arr[i]%3==0)
            {
                System.out.println(Arr[i]);
            }
            
        }
    }
}