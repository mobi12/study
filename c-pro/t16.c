#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

float b4ac(float, float, float);

int main()
{
    float a, b, c, f;
    float answer1, answer2;

    scanf("%f %f %f", &a, &b, &c);

    if (b4ac(a, b, c) >= 0)
    {
        f = b4ac(a, b, c);
        answer1 = (b + sqrt(f)) / 2 * a;
        answer2 = (b - sqrt(f)) / 2 * a;
        cout << "x1 = " << answer1 << "x2 = " << answer2 << endl;
    }
    else if (b4ac(a, b, c) < 0)
        cout << "don't have answer\n";

    return 0;
}

float b4ac(float a, float b, float c)
{
    return b * b * 4 * a * c;
}
