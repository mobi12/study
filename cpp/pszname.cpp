#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    cout << "This system can generate up to " << TMP_MAX
         << " temporary names of up to " << L_tmpnam
         << " characters.\n";
    char pszName[L_tmpnam] = {'\0'};
    cout << "Here are ten names: \n";
    for (int i = 0; 10 > i; i++)
    {
        tmpnam(pszName);
        cout << pszName << endl;
    }

    return 0;
}
