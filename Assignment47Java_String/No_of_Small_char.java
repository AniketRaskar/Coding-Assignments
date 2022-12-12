//write a java program which accepts string from the user and count the no of small letters from it
import java.lang.*;
import java.util.*;

class No_of_small_char
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        char[] Arr = str.toCharArray();
        int Count=0;
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]>='a' && Arr[i]<='z')
            {
                Count++;
            }
        }
        System.out.println("Number of small letters in the given string is :"+Count);
    }
}