//write a program perform the matrix and perform the transpose of the given matrix

import java.lang.*;
import java.util.*;

class transpose_of_matrix
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

        System.out.println("Transpose of the entered matrix is :");
        int i=0,j=0;
        int Brr[][] =new int[iRow][iCol];
        for(i=0;i<iRow;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Brr[j][i] = Arr[i][j];
            }
        }
        for(i=0;i<Brr.length;i++)
        {
            for(j=0;j<Brr[i].length;j++)
            {
                System.out.print(Brr[i][j]+"\t");
            }
            System.out.println();
        }

    }
}