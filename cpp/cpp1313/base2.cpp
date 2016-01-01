#include <iostream>
#include <cstring>
#include "base2.h"

base::base()
{
    one = "none";
    two = "none";
    three = "none";
}

base::base(char *str1, char *str2, char *str3)
{
    one = str1;
    two = str2;
    three = str3;
}

base::~base(){}

void base::View() const
{
    std::cout << one << std::endl;
    std::cout << two << std::endl;
    std::cout << three << std::endl;
}

bone::bone() : base()
{
    name = "none";
}

bone::bone(char *str1, char *str2, char *str3, char *str4) : base(str2, str3, str4)
{
    name = str1;
}

void bone::View() const
{
    base::View();
    std::cout << name << std::endl;
}

btwo::btwo()
{
    company = "none";
}

btwo::btwo(char *str1, char *str2, char *str3, char *str4) : base(str2, str3, str4)
{
    company = str1;
}

void btwo::View() const
{
    base::View();
    std::cout << company << std::endl;
}