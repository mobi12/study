#include <iostream>
#include <string>
#include <cstring>

class title
{
    private:
        char name[20];
        double like;
    public:
        title(const char *str, double num);
        void w_name(const char *str);
        void w_like(double num);
        void showTitle();
};

title::title(const char *str, double num)
{
    strncpy(name, str, 19);
    name[19] = '\0';
     like = num;
}

void title::w_name(const char *str)
{
    strncpy(name, str, 19);
    name[19] = '\0';
}

void title::w_like(double num)
{
    like = num;
}

void title::showTitle()
{
    std::cout << name << std::endl;
    std::cout << like << std::endl;
}

int main()
{
    title book1 = title("Harry b", 25.9);
    book1.showTitle();
    book1.w_name("between");
    book1.w_like(24.8);
    book1.showTitle();

    return 0;
}
