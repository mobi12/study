#ifndef NEWSTONE2_H_
#define NEWSTONE2_H_

class Stonewt
{
	private:
		static const int Lbs_per_stn = 14;
		int stone;
		double pds_left;
		double pounds;
	public:
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();
		~Stonewt(){}
		//void show() const;
		void show_lbs() const;
		void show_stn() const;
		//操作符重载
		bool operator <(Stonewt & s) const;
		bool operator >(Stonewt & s) const;
		bool operator <=(Stonewt & s) const;
		bool operator >=(Stonewt & s) const;
		bool operator !=(Stonewt & s) const;
		bool operator ==(Stonewt & s) const;
		//转换类型函数定义
		operator int() const;
		operator double() const;
		//友元函数
		friend bool operator <(const Stonewt & s1, const Stonewt & s2);
		friend bool operator >(const Stonewt & s1, const Stonewt & s2);
		friend bool operator <=(const Stonewt & s1, const Stonewt & s2);
		friend bool operator >=(const Stonewt & s1, const Stonewt & s2);
		friend bool operator !=(const Stonewt & s1, const Stonewt & s2);
		friend bool operator ==(const Stonewt & s1, const Stonewt & s2);
};

#endif