public class multiplerunning extends Thread{
    public static int amount = 0;
    public static void main(String args[] )
     { 
        multiplerunning t1 = new multiplerunning();
        Thread thread = new Thread(t1);
        thread.start();
        while(thread.isAlive()){
            System.out.println("thread is waiting...");
        }
        System.out.println("main" + amount);
        amount++;
       System.out.println("Main is running..." + amount);
     }
     public void run(){
       
            amount++;
            
        }
     }
