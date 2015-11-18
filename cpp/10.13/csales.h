#ifndef CSALES_H_
#define CSALES_H_

namespace SALES
{
	class Sales
	{
		private:
			static const int QUARTERS = 4;
			double sales[QUARTERS];
			double average;
			double max;
			double min;
		public:
			Sales();
			Sales & setSales(Sales & sa);
			void setSales(double num[], double num2, double num3);
			void showSales() const;
	};
}

#endif