class base
 {
   
    void show() 
    {
        System.out.println("this is base class");
    }
 }
 class drived extends base{
     
     void show()
     {
         System.out.println("this is drived class");
     }
 }

public class functionoverriding {
    public static void main(String args[])
    {
        drived obj = new drived();
        obj.show();
    }
}
