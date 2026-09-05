class base{
    int x;
    int y;
    base(int a, int b){
        x = a; 
        y = b;

    }
    void sum(int a, int b){
        System.out.println("sum of x and y is :" + (a +b));
    }
    void display(){
        System.out.println("x: " + x);
        System.out.println("y: " + y);
    }
 
}
 class drived extends base{
       int z;
         drived(int a, int b, int c)
         {
             super(a,b);
             z = c;
         }
         void sum( int z){
            System.out.println("sum " + (x+y+z));
         }
  }
public class inheritance {
    public static void main(String[] args){
        base a = new base(10, 20);
        drived b = new drived(10, 20, 30);
        b.sum(30);
        b.display();
        
       
    }
}
