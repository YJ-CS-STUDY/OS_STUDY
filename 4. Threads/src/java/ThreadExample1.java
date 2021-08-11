/*
 * ThreadExample1.java
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/08/01 by ithingv
 */
package thread;

public class ThreadExample1 {
    public static void main(String[] args) {
        MyThread1 thread = new MyThread1();
        thread.start();
        System.out.println("Hello my child");
    }
}
