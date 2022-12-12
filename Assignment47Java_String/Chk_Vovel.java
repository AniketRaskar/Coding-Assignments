//write a java program which accepts string from the user and chk wheather it contains vovels or not
import java.lang.*;
import java.util.*;

import javax.swing.plaf.synth.SynthSplitPaneUI;

class Chk_Vovel
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
            if(Arr[i]=='a' || Arr[i]=='e' || Arr[i]=='i' || Arr[i]=='o'||Arr[i]=='u')
            {
                Count++;
                break;
            }
            
        }
        if(Count >0)
        {
            System.out.println("Given string contains vovels in it.");
        }
        else
        {
            System.out.println("String does not contain vovels in it.");
        }
    }
}