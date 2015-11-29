//使用stonewt1.h中定义的函数和类
//测试转换函数
//与stonewt1.cpp一起编译
#include <iostream>
#include "stonewt1.h"

int main()
{
    using std::cout;

    Stonewt poppins(9, 2.8);
    double p_wt = poppins;

    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n";

    return 0;
}
