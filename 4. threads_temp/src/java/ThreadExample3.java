/*
 * ThreadExample3.java
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/08/01 by ithingv
 */
package thread;

public class ThreadExample3 {
    public static void main(String[] args) {
        Runnable task = () -> {
            try{
                while (true) {
                    System.out.println("Hello Lambda Thread");
                    Thread.sleep(500);
                }
            }
            catch (InterruptedException ie) {
                System.out.println("I'm interrupted");
            }
        };
        Thread thread = new Thread(task);
        thread.start();
        System.out.println("Hello My Lambda Child");
    }
}
