#ifndef LIST_H_
#define LIST_H_

class List
{
	private:
		static const int Len = 5;
		int num[Len];
		int now;
	public:
		List();
		bool isfull() const;
		bool isempty() const;
		void push(int num);
		void visit(void (*pf)(int []));
};

#endif