#ifndef BASE1_H_
#define BASE1_H_

class Cd
{
    private:
        char *performers;
        char *label;
        int selections;
        double playtime;
    public:
        Cd(const char *s1, const char *s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd();
        virtual void Report() const;
        Cd & operator =(const Cd & d);
};

class Classic : public Cd
{
    private:
        char *name;
    public:
        Classic(const char *s1, const char *s2, const char *s3, int n, double x);
        Classic();
        virtual ~Classic();
        virtual void Report() const;
        Classic & operator =(const Classic & c);      
};

#endif