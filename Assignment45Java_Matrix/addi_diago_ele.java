//accept the matrix from the user and give the addition of diagonal elements
import java.lang.*;
import java.util.*;

class addi_diago_ele 
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
        if(iRow != iCol)
        {
            System.out.println("Addition of diagonal elements can't be performed.");
        }
        int iSum =0;
        for(int i=0;i<Arr.length;i++)
        {
           for(int j=0;j<Arr[i].length;j++)
           {
            if(i == j)
            {
                iSum = iSum + Arr[i][j];
            }
           }
           System.out.println();
        }
        System.out.println("Sum of the diagonal elements is:"+iSum);
        
    }
}