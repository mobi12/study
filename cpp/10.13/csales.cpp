#include "csales.h"

int main()
{
	using namespace SALES;
	
	Sales one;
	Sales two;
	Sales three;
	Sales four;
	double num1[4] = {1.2, 2.4, 4.5, 5.6};
	double num2[4] = {1.5, 2.6, 7.8, 9.0};
	
	one.setSales(num1, 50, 10);
	two.setSales(num2, 60, 15);
	three = three.setSales(three);
	four = four.setSales(four);
	
	one.showSales();
	two.showSales();
	three.showSales();
	four.showSales();
	
	return 0;
}