import java.util.Scanner;
public class even 
{
    static boolean isEven(int n){
        if(n % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
      public static void main(String[] args)
      {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        isEven(n);
        if(isEven(n)){
            System.out.println(n + " is even.");
        }
        else{
            System.out.println(n +" number is odd");
        }
        sc.close();
    }
}
    
    

