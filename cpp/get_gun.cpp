#include <iostream>

using namespace std;

const int LIMIT = 255;

int main()
{
    char input[LIMIT];

    cout << "Enter a string for getline() processing: \n";
    cin.getline(input, LIMIT, '#');
    cout << "Here is your input: \n";
    cout << input << "\nDone with phase 1\n";

    char ch;
    cin.get(ch);
    cout << "The next input character is " << ch << endl;

    if (ch != '\n')
        cin.ignore(LIMIT, '\n');

    cout << "Enter a string for get() processing: \n";
    cin.get(input, LIMIT, '#');
    cout << "Here is your input: \n";
    cout << input << "\nDone with phase 2\n";

    cin.get(ch);
    cout << "The next input character is " << ch << endl;

    return 0;
}
