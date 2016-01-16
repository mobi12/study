#ifndef WINE_H_
#define WINE_H_

#include <valarray>
#include <string>

class Pair
{
    public:
        std::valarray<int> year;
        std::valarray<int> bottle;
        Pair(const int yr[] = 0, const int bot[] = 0, int y = 0, int b = 0) : year(yr, y), bottle(bot, b) {}
        Pair(int y) : year(0, y), bottle(0, y){}
        virtual ~Pair() {}
};

class Wine : private Pair
{
    private:
        std::string name;
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