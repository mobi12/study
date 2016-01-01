#ifndef BASE2_H_
#define BASE2_H_

class base
{
    private:
        char *one;
        char *two;
        char *three;
    protected:
        void SetOne(char *str){one = str;}
        void SetTwo(char *str){two = str;}
        void SetThree(char *str){three = str;}
    public:
        base();
        base(char *str1, char *str2, char *str3);
        ~base();
        virtual void View() const;
};

class bone : public base
{
    private:
       char *name;
    public:
       bone();
       bone(char *str1, char *str2, char *str3, char *str4);
       virtual void View() const;
};

class btwo : public base
{
    private:
        char *company;
    public:
        btwo();
        btwo(char *str1, char *str2, char *str3, char *str4);
        virtual void View() const;
};

#endif