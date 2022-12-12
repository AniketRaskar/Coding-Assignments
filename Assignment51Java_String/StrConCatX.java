//accept two string from user and concat N letters of second string after the first string
import java.lang.*;
import java.util.*;

class StrConCatX
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
        strobj.Concat(src, dest, No);


    }
}
class StringX
{
    
    public void Concat(String src,String dest,int No)
    {
        String Str = src.concat(dest);
        String req = Str.substring(0,(src.length()+No));
        System.out.println(req);
        // return req;
    }
}