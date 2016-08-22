#include <iostream>

using namespace std;

int main()
{
    int bucket1[5];
    int bucket2[5];
    int number = 0;
    int count = 0;

    for (int i = 0; i < 5; i++)
        cin >> bucket1[i];

    for (int i = 0; i < 5; i++)
    {
        number = bucket1[i];

        for (int j = 0; j < 5; j++)
        {
            if (number > bucket1[j])
                count++;
        }

        bucket2[count] = number;
        count = 0;
    }

    for (int i = 0; i < 5; i++)
        cout << bucket2[i] << endl;

    return 0;
}