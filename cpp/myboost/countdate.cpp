#include <iostream>
#include "mytimecount.h"
#include <boost/filesystem.hpp>

int main()
{       
    filesystem::path p("/home/tuzki/study/cpp/myboost/date.log");
    myTimeCount myTime;

    if (filesystem::file_size(p) != 0)
    {
        myTime.countTime();
    }
    else if (filesystem::file_size(p) == 0)
    {
        string tips0;
        string yourDate;

        cout << "输入你的倒计时：";
        getline(cin, tips0);
        cout << endl;
        cout << "输入你的提醒日期：";
        getline(cin, yourDate);
        cout << endl;

        myTime.setValue(tips0, yourDate);
        myTime.inputfile();
    }

    return 0;
}