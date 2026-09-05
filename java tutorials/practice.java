
public class practice{
    static long factorial(int n){
        long fact = 1L;

        for(int i = 1; i <= n;  i++){
            fact = fact * i;
        }
        return fact;
    }

    public static void main(String[] args){
        int n = 0;

        if(args.length > 0){
            try{
                n = Integer.parseInt(args[0]);
            } catch(NumberFormatException e){
                System.err.println("Invalid integer: " + args[0]);
                System.exit(1);
            }
        } else {
            System.out.println("Enter a non-negative integer:");
            java.util.Scanner sc = new java.util.Scanner(System.in);
            if(sc.hasNextInt()){
                n = sc.nextInt();
            } else {
                System.err.println("No integer provided on stdin.");
                System.exit(1);
            }
        }

        if(n < 0){
            System.err.println("Please provide a non-negative integer.");
            System.exit(1);
        }

        long result = factorial(n);
        System.out.println("Factorial of " + n + " is: " + result);
    }
}