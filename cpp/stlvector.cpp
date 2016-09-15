#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    
    for (int i = 0; i < 10; i++)
        vec.push_back(i);

    const vector<int>::iterator iter = vec.begin();
    *iter = 10;
    cout << *iter << endl;

    return 0;
}