#include <iostream>
#include <cstring>

struct chaff
{
    char dross[20];
    int slag;
};
const int ArSize = 2;
chaff buffer[2];

int main()
{
    using namespace std;

    chaff *pch[ArSize];
    char str[20];
    pch[0] = new (buffer) chaff[2];
    pch[1] = new (buffer + 1) chaff[2];

    for (int i = 0; i < ArSize; i++)
    {
        cout << "输入名字：";
        cin.get(str, 20);
        cin.get();
        strcpy(pch[i]->dross, str);
        cout << "输入数字: ";
        cin >> pch[i]->slag;
        cin.get();
    }

    for (int j = 0; j < ArSize; j++)
    {
        cout << "名字是" << pch[j]->dross << endl;
        cout << "年龄是" << pch[j]->slag << endl;
    }

    return 0;
}
