#include <iostream>
#include <thread>
#include <vector>

using namespace std;

int hello()
{
    cout << "hello world" << endl;

    return 0;
}

int main()
{
    thread first(hello);
    vector<thread> second;
    first.join();

    for (int i = 0; i < 5; i++)
    {
        second.push_back(thread([](){ cout << "hello world" << this_thread::get_id() << endl;})); //创建lambda表达式线程
    }

    cout << "thread over" << endl;

    return 0;
}