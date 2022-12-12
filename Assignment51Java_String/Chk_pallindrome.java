//accept the string from user and cheak wheather it is pallindrome or not

import java.lang.*;
import java.util.*;

class Chk_pallindrome
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        StringX strobj = new StringX();
        boolean bRet =strobj.ChkPalli(str);
        if(bRet == true)
        {
            System.out.println("String is pallindrome");
        }
        else
        {
            System.out.println("string is not pallindrome");
        }
    }
}

class StringX
{
    public boolean ChkPalli(String str)
    {
        String s1 = str;
        char Arr[] = s1.toCharArray();
        for(int i=0;i<Arr.length/2;i++)
        {
            if(Arr[i] == Arr[Arr.length-(i)-1])
            {
                continue;
            }
            else
            {
                return false;
                
            }
        }
        return true;
    }
}
