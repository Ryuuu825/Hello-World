use std::thread;
use std::time::Duration;

fn main()
{
    let mut threads = Vec::new();
    for _i in 0..10 {
        let thread = thread::spawn(move || {
            for _j in 0..9 {
                println!("Hello World with thread {}" , _i);
            }
        });
        threads.push(thread);
    }

    thread::sleep(Duration::from_millis(20))

    

}