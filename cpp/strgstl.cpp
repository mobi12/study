#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string letters;

    cout << "Enter the letter grouping (quit to q): ";
    while (cin >> letters && letters != "quit")
    {
        cout << "Permutations of " << letters << endl;
        sort(letters.begin(), letters.end());
        cout << letters << endl;
        while (next_permutation(letters.begin(), letters.end()))
            cout << letters << endl;
        cout << "Enter next sequence (quit to q): ";
    }

    cout << "Done.\n";

    return 0;
}
