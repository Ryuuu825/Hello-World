import threading

def hello_world(thread_id : int):
    for i in range(10):
        print("Hello World with thread {}".format(thread_id))

def main():
    threads = []
    for i in range(10):
        threads.append(threading.Thread(target=hello_world , args=(i,)))
    for i in range(len(threads)):
        threads[i].start()
    for i in range(len(threads)):
        threads[i].join()
        

main()