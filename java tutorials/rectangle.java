import java.util.Scanner;
public class rectangle 
{
     int l, b, a, p;
    void getlb(Scanner sc){
      
      System.out.print("Enter length: ");
      l = sc.nextInt();
      System.out.print("enter breadth: ");
      b = sc.nextInt();

    }
    void area()
    {
        a = l * b;
        System.out.println("Area of rectangle: " + a);
    }
    
    void display(){
        System.out.println("Length: " + l);
        System.out.println("Breadth: " + b);
        System.out.println("Area: " + a);
    }
    void greater(rectangle r4, int a)
    {
       if(a > r4.a) {
        System.out.println("Rectangle 1 has greater area.");
       }
       
       else {
        System.out.println("Both rectangles have equal area.");
       
      }
    }
    public static void main(String [] args){
       
        rectangle r = new rectangle();
        rectangle  r1 = new rectangle();
        Scanner sc = new Scanner(System.in);
        r.getlb(sc); // Example values for length and breadth
        r.area();
        r.display();
         r1.getlb(sc); // Example values for length and breadth
        r1.area();
        r1.display();
        r.greater(r1, 15);
        sc.close();
    }
    
}