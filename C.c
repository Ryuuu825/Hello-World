#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void hello_world(void* thread_id);

int main(void)
{
    pthread_t thread[10];
    for(int i = 0 ; i < 10 ; i++)
    {
        pthread_create( &thread[i], NULL , (void*) hello_world , (void*)i);
    }


    for(int i = 0 ; i < 10 ; i++)
    {
        pthread_join(&thread[i] , NULL);
    }

    sleep(10); // The library seem do not wait the the thread finish to end itself

    
}
void hello_world(void* thread_id)
{
    for(int i = 0 ; i < 10 ; i++)
    { 
        printf("Hello World with thread %d\n" ,  (int*) thread_id);
        sleep(1);
    }
    pthread_exit(NULL);
}