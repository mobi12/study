//多线程

#include <iostream>
#include <thread>

using namespace std;

/*void thread_func()
{
    cout << "Thread running...\n";
}*/

int main()
{
    thread thd;
    
   cout <<  thread::hardware_concurrency() << endl;
   cout << this_thread::get_id() << endl;
    thd.join();
    
    return 0;
}