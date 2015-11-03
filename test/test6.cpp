#include <iostream>

using namespace std;

int main()
{
    volatile int a = 0;
    cout << &a << endl;
    a++;
    cout << &a << endl;
    cout << a << endl;

    return 0;
}
