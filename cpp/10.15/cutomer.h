#ifndef CUTOMER_H_
#define CUTOMER_H_

struct customer
{
	char fullname[35];
	double payment;
};

class Stack
{
	private:
		static const int MAX = 5;
		customer bit[MAX];
		double average;
		int a;
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		bool push(const customer & bet);
		bool pop(customer & bet);
		void show() const;
};

#endif