#ifndef STOCK3_H_
#define STOCK3_H_
#include <iostream>

class Stock
{
	private:
		char *company;
		int shares;
		double share_val;
		double total_val;
		void set_tot()
		{
			total_val = shares * share_val;
		}

	public:
        Stock();
		Stock(const char * co, double pr = 0.0);
		~Stock();
		void buy(int num, double price);
		void sell(int num, double price);
		void update(double price);
		const Stock & topval(const Stock & s) const;
		//友元函数
		friend std::ostream & operator <<(std::ostream & os, const Stock & st);
};

#endif
