#include <iostream>
#include <cstring>
#include "base1.h"

using std::cout;
using std::endl;

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    performers = new char[std::strlen(s1) + 1];
    label = new char[std::strlen(s2) + 1];
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = '\0';
    label = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;  
}

void Cd::Report() const
{
    std::cout << performers << std::endl;
    std::cout << label << std::endl;
    std::cout << "selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}

Cd & Cd::operator =(const Cd & d)
{
    if (this == &d)
        return *this;
        
    delete [] performers;
    delete [] label;
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    
    return *this;
}

Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x) : Cd(s1, s3, n, x)
{
    name = new char[std::strlen(s2) + 1];
    std::strcpy(name, s2);
}

Classic::Classic()
{
    name = '\0';
}

Classic::~Classic()
{
    delete [] name;
}

void Classic::Report() const
{
    std::cout << name << std::endl;
    Cd::Report();
}

Classic & Classic::operator =(const Classic & c)
{
    if (this == &c)
        return *this;
    Cd::operator =(c);
    delete [] name;
    name = new char[std::strlen(c.name) + 1];
    std::strcpy(name, c.name);
    
    return *this;  
}