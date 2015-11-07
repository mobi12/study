#include <string>

namespace aname
{
    using namespace std;
    struct common
    {
        string name;
        int year;
    };

    void setPeople(common &a);
    int old(common people1, common people2);
}
