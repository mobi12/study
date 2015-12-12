#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow()
{
    name[0] = '\0';
    hobby = '\0';
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    std::strcpy(name, nm);
    hobby = new char[std::strlen(ho)];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

Cow & Cow::operator =(const Cow & c)
{
    if (this == &c)
        return *this;
    delete [] hobby;
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

void Cow::ShowCow() const
{
    using std::cout;
    using std::endl;

    cout << "名字: " << name << endl;
    cout << "爱好: " << hobby << endl;
    cout << "重量: " << weight << endl;
}
