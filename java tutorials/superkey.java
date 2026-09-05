class base
{
    base()
    {
        System.out.println("this is base class constructor");
    }
 static void sum()
    {
        int a = 10;
        int b = 20;
        System.out.println("sum is " + (a+b));
    }
}
class drived extends base
   {
    
     drived()
     {
     
        super.sum();
        System.out.println("drived classs constructor");
     }
    }

public class superkey {
public static void main( String args[])
   {
    drived  obj = new drived();
    obj.sum();

   }
}
