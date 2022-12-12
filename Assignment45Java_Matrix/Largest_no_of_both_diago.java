//accept the matrix from the user and find the largest no of both the diagonal

import java.lang.*;
import java.util.*;

class Largest_no_of_both_diago 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCol=0,iRow =0,iRet=0;
        System.out.println("Enter the number of rows:");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns:");
        iCol = sobj.nextInt();

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
        
        int iMax =0;
        for(int i=0;i<Arr.length;i++)
        {
           for(int j=0;j<Arr[i].length;j++)
           {
            if((i==j) || (j ==(Arr.length-i-1)))
            {
               if(Arr[i][j] > iMax)
               {
                iMax = Arr[i][j];
               }
            }
           }
        }
        System.out.println("lagest number of the both diagonal is : "+iMax);
        
    }
}