#include <iostream>
#include "cutomer.h"

using namespace std;

int main()
{
	Stack st;
	char ch;
	customer bet;
	
	while (cin >> ch && st.isempty() && ch != 'Q')
	{
		cin.get();
		switch (ch)
		{
			case 'a':
			case 'A': cout << "输入数据: ";
					cin.get(bet.fullname, 35);
					cin >> bet.payment;
					st.push(bet);
					break;
			case 'p':
			case 'P': st.pop(bet);
					break;
		}
	}
	
	st.show();
	return 0;
}