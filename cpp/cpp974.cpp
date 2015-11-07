#include "sales.h"

using namespace SALES;

int main()
{
    using namespace SALES;
    const double num[QUARTERS] = {1.1,2,3.2,4.2};
    Sales coffe;
    Sales dinner;

    setSales(coffe, num, 13.1);
    setSales(dinner);
    showSales(dinner);
    showSales(coffe);

    return 0;
}
