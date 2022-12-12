//accept the matrix from the user and swap the consecutive rows

import java.lang.*;
import java.util.*;

class swap_rows 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCol=0,iRow =0,iRet=0;
        System.out.println("Enter the number of rows:");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns:");
        iCol = sobj.nextInt();

        if((iRow %2 != 0) || (iCol %2 != 0))
        {
            System.out.println("plz, Enter the even row ");
            return;
        }

        int Arr[][] = new int[iCol][iRow];
        System.out.println(("Enter the elements of the matrix:"));
        
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }
        System.out.println("Matrix is as below:");

        for(int i=0;i<Arr.length;i++)
        {
           for(int j=0;j<Arr[i].length;j++)
           {
            System.out.print(Arr[i][j] +"\t");
           }
           System.out.println();
        }
        for(int i=0;i<iRow;i+=2)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
               int Brr[][] = new int[Arr.length][Arr[i].length];
                Brr[i][j] =  Arr[i][j];
                Arr[i][j] =Arr[i+1][j];
                Arr[i+1][j]=Brr[i][j];
           }
        }
        System.out.println("Matrix after swapping is :");

        for(int i=0;i<Arr.length;i++)
        {
           for(int j=0;j<Arr[i].length;j++)
           {
            System.out.print(Arr[i][j] +"\t");
           }
           System.out.println();
        }

    }
}