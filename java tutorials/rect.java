import java.util.Scanner;
class rectangle
{
    int l, b, a, p;
    void getlb( Scanner sc){
        
        l =  sc.nextInt();
        b = sc.nextInt();
    }
    void area()
    {
        a = l * b;
        
    }
    void display()
    {
        System.out.println("Length: " + l);
        System.out.println("Breadth: " + b);
        System.out.println("Area: " + a);
    

  
    }
};
public class rect {
    public static void main(String[] args){
          rectangle r = new rectangle();
          
         Scanner sc = new Scanner(System.in);
          r.getlb(sc);
          r.area();
          r.display();
          sc.close();
    }

}