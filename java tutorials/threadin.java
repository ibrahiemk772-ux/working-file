public class Main extends Thread {
    public static void main(String[] args) {
        Main t1 = new Main();
        t1.start();
        for(int i = 0; i < 5; i++)
        {
            System.out.println("outside thread1");
        }
      public  void run()
        {
            for(int i = 0; i < 5; i++)
            {
                System.out.println("inside thread");
            }
        }
    
}
