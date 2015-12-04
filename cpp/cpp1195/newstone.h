#ifndef NEWSTONE_H_
#define NEWSTONE_H_
#include <iostream>

class Stonewt
{
    private:
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();
        ~Stonewt(){}
        void chioce(char ch) const;
        operator int() const;
        operator double() const;
        friend Stonewt operator +(const Stonewt & s1, const Stonewt & s2);
        friend Stonewt operator -(const Stonewt & s1, const Stonewt & s2);
        friend Stonewt operator *(const Stonewt & s1, double n);
        friend std::ostream & operator <<(std::ostream & os, const Stonewt & s);
};

#endif