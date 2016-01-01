#include <iostream>
#include <cstring>
#include "order.h"

Port::Port(const char *br, const char *st, int b)
{
    brand = new char[strlen(br)];
    strcpy(brand, br);
    strncpy(style, st, 19);
    style[19] = '\0';
    bottles = b;
}

Port::Port(const Port & p)
{
    delete [] brand;
    brand = new char[strlen(p.brand)];
    strcpy(brand, p.brand);
    strncpy(style, p.style, 19);
    style[19] = '\0';
    bottles = p.bottles;
}

Port & Port::operator =(const Port & p)
{
    if (this == &p)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand)];
    strncpy(style, p.style, 19);
    style[19] = '\0';
    bottles = p.bottles;
    
    return *this;
}

Port & Port::operator +=(int b)
{
    bottles += b;
    
    return *this;
}

Port & Port::operator -=(int b)
{
    bottles -= b;

    return *this;
}

void Port::Show() const
{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream & operator <<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", "
        << p.bottles;

    return os;
}

VintagePort::VintagePort() : Port()
{
    nickname = '\0';
    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "none", b)
{
    nickname = new char[strlen(nn)];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp)
{
    delete [] nickname;
    nickname = new char[strlen(vp.nickname)];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}

ostream & operator <<(ostream & os, const VintagePort & vp)
{
    os << Port(vp) << endl;
    os << vp.nickname << ", " << vp.year << endl;
    
    return os;
}