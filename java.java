// Main Class
public class java {
    public static void main(String[] args)
    {
        HelloWorld[] threads = new HelloWorld[10];
        for (int i = 0; i < 10 ; i++) {
            threads[i] = new HelloWorld(i);
        }

        for (int i = 0; i < 10 ; i++) {
            threads[i].start();
        }
    }
}

class HelloWorld extends Thread {
    private int threadId;

    public HelloWorld(int i) {
        super();
        threadId = i;
    }

    public void run()
    {
        try
        {
            for(int i = 0; i < 10; i++) {
                System.out.printf("Hello World with thread %d\n" , threadId );
                
                Thread.sleep(1);
            }
        }catch (InterruptedException e)
        {
            System.out.printf("Thread %d interrupted.\n", threadId);
        }
        
    }
}
 
