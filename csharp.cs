using System;
using System.Threading;

namespace Program {
    public class CSharp {
        public static void Main(string[] args) {
            Thread[] threads = new Thread[10];
            for(int i = 0 ; i < 10 ; i++) {
                threads[i] = new Thread(new ParameterizedThreadStart(CSharp.HelloWorld));
            };

            for(int i = 0 ; i < 10 ; i++) {
                threads[i].Start(i);
            }
        }

        public static void HelloWorld(object ThreadId)
        {
            for(int j = 0 ; j < 10 ; j++) {
                Console.WriteLine("Hello world with thread " + (int) ThreadId);
            }
        }
    }
}
