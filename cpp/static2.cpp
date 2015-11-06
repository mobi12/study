#include <iostream>
#include <string>

//修改源代码，将数组换成string对象

using namespace std;

void strcount(string str);

int main()
{
    string input;

    cout << "Enter a line: " << endl;
    getline(cin, input);

    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit): " << endl;
        cin >> input;
    }

    cout << "Bye" << endl;

    return 0;
}

void strcount(string str)
{
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    count = str.size();
    total += count;
    cout << count << " characters" << endl;
    cout << total << " characters total" << endl;
}
