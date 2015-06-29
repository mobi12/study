#include <iostream>
#include <string>

/*编程练习4.11第一题*/

using namespace std;

int main()
{
	string ans1;
	string ans2;
	char ans3;
	int age = 0;

	cout << "what your first name?" << endl;
	cin >> ans1;
	cout << "what your last name?" << endl;
	cin >> ans2;
	cout << "what letter grade do you deserve?" << endl;
	cin >> ans3;
	cout << "what is your age?" << endl;
	cin >> age;
	
	cout << "Name:" << ans1 << "," << ans2 << endl;
	ans3 = ans3+1;
	cout << "Grade:" << ans3 << endl;
	cout << age << endl;

	return 0;	 
}
