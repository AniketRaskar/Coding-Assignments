//write a program perform the matrix and perform reversing of each matrix

import java.lang.*;
import java.util.*;

class Reverse_row
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow,iCol=0;
        
        System.out.println("Enter the Number of rows of matrix:");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns of matrix:");
        iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println("Enter the elements of the matrix: ");
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                Arr[i][j] =sobj.nextInt();
            }
        }
        System.out.println("Matrix is as follow:");
        for(int i=0;i<iRow;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }

        int i=0,j=0;
        int Brr[][] =new int[iRow][iCol];
        System.out.println("Matrix after reversing the rows is as follow : ");
        for(i=0;i<iRow;i++)
        {
            for(j=Arr[i].length-1;j>=0;j--)
            {
               System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}