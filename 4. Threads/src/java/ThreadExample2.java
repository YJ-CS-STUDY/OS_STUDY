/*
 * ThreadExample2.java
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/08/01 by ithingv
 */
package thread;

public class ThreadExample2 {
    public static void main(String[] args) {
        Thread thread = new Thread(new MyThread2());
        thread.start();
        System.out.println("Hello, My Runnable Child");
    }
}
