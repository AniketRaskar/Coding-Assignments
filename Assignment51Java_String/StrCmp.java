//accept two string from user and chk wheather they are equal or not
import java.lang.*;
import java.util.*;

class StrCmp
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the first String:");
        String src = sobj.nextLine();

        System.out.println("Enter the second string:");
        String dest = sobj.nextLine();

        StringX strobj = new StringX();
        strobj.StrCmpX(src, dest);


    }
}
class StringX
{
    
    public void StrCmpX(String src,String dest)
    {
      if(src.equals(dest))
      {
        System.out.println("Two strings are equal");
      }
      else
      {
        System.out.println("Two strings are not equal.");
      } 
    }
}
