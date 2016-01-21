#include <iostream>
#include <cmath>
#include <cstring>
#include "exc_mean.h"

class demo
{
    private:
        char word[40];
    public:
        demo(const char *str)
        {
            std::strcpy(word, str);
            std::cout << "demo " << word << " created\n";
        }
        ~demo()
        {
            std::cout << " demo " << word << " lives!\n";
        }
        void show() const
        {
            std::cout << "demo " << word << " lives!\n";
        }
};

double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);
double means(double a, double b) throw(bad_hmean, bad_gmean);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    double x, y, z;
    demo d1("found in main()");
    cout << "Enter two number: ";
    
    while (cin >> x >> y)
    {
        try
        {
            z = means(x, y);
            cout << "The mean mean of " << x << " and " << y
                 << " is " << z << endl;
        }
        catch (bad_hmean & bg)
        {
            bg.mesg();
            cout << "Try again.\n";
            continue;
        }
        catch (bad_gmean & bg)
        {
            bg.mesg();
            cout << "Value used: " << bg.v1 << ", "
                 << bg.v2 << endl;
            cout << "Sorry, you don't get to play any more.\n";
            break;
        }
    }
    
    d1.show();
    cout << "Bye.\n";
    return 0;
}

double hmean(double a, double b) throw(bad_hmean)
{
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) throw(bad_gmean)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b);
}

double means(double a, double b) throw(bad_hmean, bad_gmean)
{
    double am, hm, gm;
    demo d2("found in means");
    am = (a + b) / 2.0;
    try
    {
        hm = hmean(a, b);
        gm = gmean(a, b);
    }
    catch (bad_hmean & bg)
    {
        bg.mesg();
        std::cout << "Caught in means()\n";
        throw;
    }
    
    d2.show();
    return (am + hm + gm) / 3.0;
}