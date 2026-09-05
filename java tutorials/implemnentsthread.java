public class Main implements Runnable{
    public static void main(String args[])
    {
        Main obj = new Main();
        Thread t1 = new Thread(obj);
        t1.start();
        System.out.println("outside thread");
    }
    public void run()
    {
        System.out.println("inside thread");
    }
    
}
