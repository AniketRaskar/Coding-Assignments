//accept the matrix from the user and one number and find the frequency of that number in the matrix.

import java.lang.*;
import java.util.*;

class Freuq_of_no_in_matrix
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCol=0,iRow =0,iRet=0,iNo=0;
        System.out.println("Enter the number of rows:");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns:");
        iCol = sobj.nextInt();

        System.out.println("Enter the element to search:");
        iNo = sobj.nextInt();

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
        
        int iCount =0;
        for(int i=0;i<Arr.length;i++)
        {
           for(int j=0;j<Arr[i].length;j++)
           {
            if(Arr[i][j] == iNo)
            {
               iCount++;
            }
           }
        }
        System.out.println("Number of times "+iNo +" occours in the matrix is : "+iCount);
        
    }
}