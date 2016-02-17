#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int n;
    cin >> n;
    
    cout << "n     n*n\n";
    cout << n << "     " << n * n << "(decimal)\n";
    cout << hex;
    cout << n << "   ";
    cout << n * n << "(hexadecimal)\n";
    cout << oct << n << "     " << n * n << "(octal)\n";
    dec(cout);
    cout << n << "     " << n * n << "(decimal)\n";
    
    return 0;
}