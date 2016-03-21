#include <iostream>

using namespace std;

int main()
{
    auto i = 0; //类型推断
    auto j = 3.2;

    cout << i << endl;
    cout << j << endl;

    int array[5] = {1, 2, 3, 4, 5};
    for (int & e : array)
    {
           cout << e << endl;
    }
    
    auto test = [](int n) { return n > 1; };  //lambda表达式
    cout << test(i) << endl;

    return 0;
}
