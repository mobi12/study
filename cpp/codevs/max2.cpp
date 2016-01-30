#include <iostream>

using namespace std;

int main()
{
    int max = 0;
    int min = 0;
    int b = 0;
    int *a = new int[b];
    
    cin >> b;
    for (int i = 0; i < b; i++)
        cin >> a[i];
    max = a[0];
    min = a[0];
    for (int i = 0; i < b; i++)
    {
       max = max > a[i] ? a[i] : max;
       min = min < a[i] ? a[i] : min;
    }
    
    cout << max << " " << min << endl;
    
    return 0;
}