#include <iostream>
#include <cstring>
#include "stock3.h"

Stock::Stock()
{
	company = '\0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char * co, double pr)
{
	company = new char[strlen(co)];
	std::strcpy(company, co);
	shares = strlen(co);
	share_val = pr;

	if (strlen(co) < 0)
	{
		std::cerr << "Number of shares can't be negative."
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	set_tot();
}

Stock::~Stock()
{
	delete [] company;
}

void Stock::buy(int num, double price)
{
	if (num < 0)
	{
		std::cerr << "Number of shares purchased can't be negative."
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price)
{
	using std::cerr;

	if (num < 0)
	{
		cerr << "Number of shares sold can't be negative."
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

const Stock & Stock::topval(const Stock & s) const
{
     if (s.total_val > total_val)
         return s;
     else
         return *this;
}

//友元函数
std::ostream & operator <<(std::ostream & os, const Stock & st)
{
	os << "Company: " << st.company;
	os << " Shares: " << st.shares << std::endl;
	os << " Shares Price: $" << st.share_val
		<< " Total Worth: $" << st.total_val << std::endl;
	
	return os;
}