#include <iostream>
#include "cow.h"

int main()
{
    Cow one("blabla", "blablabla", 158.9);
    Cow two(one);
    Cow three = two;

    one.ShowCow();
    two.ShowCow();
    three.ShowCow();

    return 0;
}
