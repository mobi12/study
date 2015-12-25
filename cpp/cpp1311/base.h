#ifndef BASE_H_
#define BASE_H_

class Cd
{
    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;
    public:
        Cd(const char *s1, const char *s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        ~Cd();
        virtual void Report() const;
        Cd & operator =(const Cd & d);
};

class Classic : public Cd
{
    private:
        char name[50];
    public:
        Classic(const char *s1, const char *s2, const char *s3, int n, double x);
        Classic();
        ~Classic();
        virtual void Report() const;
        Classic & operator =(const Classic & c);      
};

#endif