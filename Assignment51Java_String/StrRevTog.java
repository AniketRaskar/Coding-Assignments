//accept string from user and revrse the with toggling in case
import java.lang.*;
import java.util.*;

import javax.lang.model.util.ElementScanner14;

class StrRevTog
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the first String:");
        String src = sobj.nextLine();

        StringX strobj = new StringX();
        strobj.strRevX(src);


    }
}
class StringX
{
    
    public void strRevX(String src)
    {
      String s1 = src;
      char arr[] = s1.toCharArray();
      String rev ="";
      for(int i=arr.length-1;i>=0;i--)
      {
        rev+= arr[i];
      }
      togX(rev);
    }
    public void togX(String src)
    {
        String toggle = "";
        char Arr[]=src.toCharArray();
        for(int i=0;i<Arr.length;i++)
        {
            char letter= Arr[i];
            if(Character.isUpperCase(letter))
            {
                letter = Character.toLowerCase(letter);
                toggle += letter;
            }
            else if(Character.isLowerCase(letter))
            {
                letter = Character.toUpperCase(letter);
                toggle += letter;
            }
            else
            {
                toggle += letter;
            }
        }
        System.out.println(toggle);
    }
}
