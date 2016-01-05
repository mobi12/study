#include <stdio.h>
#define dprint(expr) printf(#expr " = %g\n", expr)

int main()
{
    int x = 2;
    int y = 1;
    dprint(x/y);

    return 0;
}
