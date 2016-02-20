#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string list = "It was a disk and stormy day, and the full moon glowed brilliantly. ";
    istringstream instr(list);
    string word;

    while (instr >> word)
        cout << word << endl;
    return 0;
}
