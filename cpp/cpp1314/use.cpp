#include "order.h"

int main()
{
    Port one("Gallo", "tawny", 20);
    VintagePort two("Gallo", 15, "Mike", 20);
    
    cout << one << endl;
    two.Show();
    
    return 0;
}