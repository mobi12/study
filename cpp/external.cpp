#include <iostream>

using namespace std;

double warming = 0.3;

void update(double dt);
void local();

int main()
{
    cout << "Global warming is " << warming << " degrees." << endl;
    update(0.1);
    cout << "Global warming is " << warming << "degrees." << endl;
    local();
    cout << "Global warming is " << warming << "degrees." << endl;

    return 0;
}

void update(double dt)
{
     extern double warming;
     warming += dt;
     cout << "Updating global warming to " << warming;
     cout << "degrees." << endl;
}

void local()
{
     double warming = 0.8;
     cout << "Local warming = " << warming << "degrees." << endl;
     cout << "But global warming = " << ::warming;
     cout << "degrees." << endl;
}
