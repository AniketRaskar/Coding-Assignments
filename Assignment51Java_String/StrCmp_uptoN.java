//accept two string from user and number N and compair strings upto N letters
import java.lang.*;
import java.util.*;

class StrCmp_uptoN
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the first String:");
        String src = sobj.nextLine();

        System.out.println("Enter the second string:");
        String dest = sobj.nextLine();

        System.out.println("Enter the no of characters have to concat:");
        int No = sobj.nextInt();

        StringX strobj = new StringX();
        strobj.strCmp(src, dest, No);


    }
}
class StringX
{
    
    public void strCmp(String src,String dest,int No)
    {
        if(No > src.length() || No > dest.length())
        {
            System.out.println(src+dest);
            return;
        }
        else
        {
            String s1 = src.substring(0,No);
            String s2 = dest.substring(0,No);
            if(s1.equals(s2))
            {
                System.out.println("These part of strings are equal.");
            }
            else
            {
                System.out.println("These part of strings are not equal.");
            }
        }   
    }
}