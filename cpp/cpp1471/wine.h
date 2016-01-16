#ifndef WINE_H_
#define WINE_H_

#include <valarray>
#include <string>

template <typename T1, typename T2>
class Pair
{
    public:
        T1 year;
        T2 bottle;
        Pair(const T1 & y, const T2 & b) : year(y), bottle(b) {}
        ~Pair() {}
};

class Wine
{
    private:
        typedef std::valarray<int> ArrayInt;
        typedef Pair<ArrayInt, ArrayInt> PairArray;
        std::string name;
        PairArray zone;
    public:
        Wine(const char *l, int y, const int yr[], const int bot[]);
        Wine(const char *l, int y);
        ~Wine() {}
        void Show() const;
        void GetBottles();
        std::string & Label();
        int sum();
};

#endif