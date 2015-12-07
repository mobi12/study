#ifndef STRNGBAD_H_
#define STRNGBAD_H_
#include <iostream>
//有问题的类
class Stringbad
{
    private:
        static int num_strings;
        char * str;
        int len;
    public:
        Stringbad(const char * s);
        Stringbad();
        ~Stringbad();
    //友元函数
        friend std::ostream & operator <<(std::ostream & os, const Stringbad & st);
};

#endif
