#include <iostream>
#include "newstone.h"

int main()
{
    using std::cout;
    using std::endl;

    Stonewt poppins(9, 2.8);
    Stonewt poppins2(10, 2.9);
    Stonewt poppins3(11, 3.0);
    double p_wt = poppins;

    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n";
    
    poppins = poppins + poppins2;
    cout << poppins << endl;
    poppins.chioce('s');
    poppins.chioce('f');
    poppins.chioce('p');
    
    poppins2 = poppins - poppins3;
    cout << poppins2 << endl;
    
    poppins3 = poppins3 * 3.0;
    cout << poppins3 << endl;
    
    return 0;
}
