/*
 * ThreadExample5.java
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/08/01 by ithingv
 */
package thread;

public class ThreadExample5 {
    public static void main(String[] args) throws InterruptedException {
        Runnable task = () -> {
            try{
                while (true) {
                    System.out.println("Hello, Lambda Thread");
                    Thread.sleep(100);
                }
            }
            catch (InterruptedException ie){
                System.out.println("I'm interrupted");
            }
        };
        Thread thread = new Thread(task);
        thread.start();
        Thread.sleep(500);
        thread.interrupt();
        System.out.println("Hello, My Joined Child");
    }
}
