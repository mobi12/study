#include <iostream>

class Cout
{
	private:
		int a;
		int b;
	public:
		Cout();
		Cout(int num1, int num2);
};

Cout::Cout()
{
	a = 0;
	b = 0;
}

Cout::Cout(int num1, int num2)
{
	using std::cout;
	using std::endl;
	
	a = num1;
	b = num2;
	cout << a << " " << b << endl;
}

int main()
{
	Cout one(5, 6);
	
	return 0;
}