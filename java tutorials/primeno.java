import java.util.Scanner;
public class primeno {
    
      
        
   static boolean isprime(int  val){
         if( val <= 1){
            return false;
         }
         if(val == 2){
            return true;
         }
         if(val % 2 == 0){
            return false;
         }
         
         return true;
    }
    public static void main( String [] args){
        Scanner sc = new Scanner(System.in);
        int val = sc.nextInt();
        if(isprime(val)){
            System.out.print(val + " is prime");
        }
        else{
            System.out.print("not a prime number");
        }
         sc.close();
    }
}
