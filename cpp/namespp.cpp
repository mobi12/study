#include <iostream>
#include "namesp2.h"

using namespace aname;
using namespace std;

int main()
{
    common zhang;
    common wang;
    int a = 0;

    setPeople(zhang);
    setPeople(wang);
    a = old(zhang, wang);
    cout << "他们一共" << a << "岁啦" << endl;

    return 0;
}
