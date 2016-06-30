#ifndef MYTIMECOUNT_H_
#define MYTIMECOUNT_H_

#include <string>
#include <fstream>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;
using namespace boost;

class myTimeCount
{
    private:
        string tips;
        gregorian::date now;
        gregorian::date count;
        ifstream input;
        ofstream output;
    public:
        myTimeCount();
        void setValue(string t, string d);
        void countTime();
        void inputfile();
};

#endif