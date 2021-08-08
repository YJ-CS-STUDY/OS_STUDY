/*
 * ThreadExample4.java
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/08/01 by ithingv
 */
package thread;

public class ThreadExample4 {
    public static void main(String[] args) {
        Runnable task = () -> {
                for (int i= 0; i < 5; i++) {
                    System.out.println("Hello, Lambda Thread");
                }
        };
        Thread thread = new Thread(task);
        thread.start();
        try {
            thread.join();
        } catch (InterruptedException ie){
            System.out.println("Parent thread is interrupted");
        }
        System.out.println("Hello, My Joined Child");
    }
}
