#include <iostream>

using namespace std;

int main()
{
    int pops[5];

    for (int i = 0; i < 5; i++)
        cin >> pops[i];

    for (int i = 0; i < 4; i++)
        for (int i = 0; i < 5; i++)
        {
            int temp = 0;

            if (pops[i] > pops[i + 1])
            {
                temp = pops[i + 1];
                pops[i + 1] = pops[i];
                pops[i] = temp;
            }
        }

    for (int i = 0; i < 5; i++)
        cout << pops[i] << endl;

    return 0;
}