public class Main extends Thread {
    public static void main(String args[]){
        Main t1 = new Main();
        Thread thread = new Thread(t1);
        thread.start();
        System.out.println("main  is running outside thread...");
    }
    public void run(){
        System.out.println("thread is running...");
    }
}
