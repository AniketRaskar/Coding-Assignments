//write a program to perform the matrix and cheak wheather it is sprase matrix of not.

import java.lang.*;
import java.util.*;

class Sprase_matrix
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
        int Matrix_ele = iRow * iCol;
        int Count=0;
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]==0)
                {
                    Count++;
                }
            }
        }
        if(Count>(Matrix_ele/2))
        {
            System.out.println("Matrix is Sprase matrix");
        }
        else
        {
            System.out.println("Matrix is not a sprase matrix");
        }
    }
}