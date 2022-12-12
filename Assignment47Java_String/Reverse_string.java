//write a java program which accepts string from the user and count the no of small letters from it
import java.lang.*;
import java.util.*;

class Reverse_string
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        char [] Arr = str.toCharArray();
        for(int i=Arr.length-1;i>=0;i--)
        {
            System.out.print(Arr[i]);
        }
       
    }
}