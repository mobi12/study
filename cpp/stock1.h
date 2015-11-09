#ifndef STOCK_H_
#define STOCK_H_

class Stock
{
    private:
        char company[30];
        int shares;
        double share_val;
        double total_val;
        void set_tot()
        {
             total_val = shares * share_val;
        }
    public:
        Stock();
        ~Stock();
        Stock(const char *co, int n, double pr);
        void buy(int num, double price);
        void sell(int num, double price);
        void update(double price);
        void show();
};

#endif
