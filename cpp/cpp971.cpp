#include <iostream>
#include "golf.h"

int main()
{
    golf ann;
    setgolf(ann, "Ann birdfree", 21);
    showgolf(ann);
    handicap(ann, 14);
    int now = 1;

    while (now < Len && now != 0)
        now = setgolf(ann);

    return 0;
}
