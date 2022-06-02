#include <thread>
#include <iostream>


void hello_world(int thread_id);

int main(void)
{
    std::thread thread1;
    thread1 = std::thread(hello_world ,  1);
    thread1.join();
}

void hello_world(int thread_id)
{
    for(int i = 0 ; i < 10 ; i++)
    { 
        std::cout << "Hello World with thread" << thread_id << "\n";
    }
    pthread_exit(NULL);
}