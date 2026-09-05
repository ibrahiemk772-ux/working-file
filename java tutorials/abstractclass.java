
abstract  class animal
{
 public abstract void eat();
 public void sleep()
 {
    System.out.println("this is abstract class");
 }
}
class dog extends animal
{
    public void eat()
    {
        System.out.println("this is dog class");
    }
}
public class abstractclass {
     public static void main(String args[])
     {
        dog obj = new dog();
        obj.eat();
        obj.sleep();
     }
}
