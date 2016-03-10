#include <stdio.h>

int cube(int x);

int main()
{
    int a, b, c, i;

    for (i = 100; i < 1000; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 100 % 10;
        if (i == (cube(a) + cube(b) + cube(c)))
            printf("%d\n", i);
    }
}

int cube(int x)
{
    return x * x * x;
}
