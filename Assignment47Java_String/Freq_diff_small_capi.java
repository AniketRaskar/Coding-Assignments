//write a java program which accepts string from the user and count the difference bet frequency of samll and capital
import java.lang.*;
import java.util.*;

class Freq_diff_small_capi
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        char[] Arr = str.toCharArray();
        int CCnt=0,SCnt=0,Count=0;
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]>='A' && Arr[i]<='Z')
            {
                CCnt++;
            }
            if(Arr[i]>='a' && Arr[i]<='z')
            {
                SCnt++;
            } 
            
        }
        Count=SCnt-CCnt;
        System.out.println("Difference between small and capital letter of the string is :"+Count);
    }
}