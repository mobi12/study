#include <iostream>

using namespace std;

int main()
{
    int all;
    int y;
    cin >> y;
    int *x = new int[y];
    for (int i = 0; i < y; i++)
        cin >> x[i];
    for (int i = 0; i < y; i++)
        all += x[i];
    cout << all << endl;
    return 0;
}