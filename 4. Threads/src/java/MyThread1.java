/*
 * MyThread1.java
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/08/01 by ithingv
 */
package thread;

public class MyThread1 extends Thread{
    @Override
    public void run() {
        try{
            while (true) {
                System.out.println("Hello Thread!");
                Thread.sleep(500);
            }
        }
        catch (InterruptedException ie)
        {
            System.out.println("I'm Interrupted");
        }
    }
}
