#include <iostream>
#include <cstring>
#include "base.h"

using std::cout;
using std::endl;

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    std::strncpy(performers, s1, 49);
    performers[49] = '\0';
    std::strncpy(label, s2, 19);
    label[19] = '\0';
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    std::strcpy(performers,"none");
    std::strcpy(label, "none");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd(){}

void Cd::Report() const
{
    cout << performers << endl;
    cout << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;
}

Cd & Cd::operator =(const Cd & d)
{
    if (this == &d)
        return *this;
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    
    return *this;
}

Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x) : Cd(s1, s2, n, x)
{
    std::strncpy(name, s2, 49);
    name[49] = '\0';
}

Classic::Classic()
{
    std::strcpy(name, "none");
}

Classic::~Classic(){}

void Classic::Report() const
{
    cout << name << endl;
    Cd::Report();
}

Classic & Classic::operator =(const Classic & c)
{
    if (this == &c)
        return *this;
    Cd::operator =(c);
    std::strcpy(name, c.name);
    
    return *this;  
}