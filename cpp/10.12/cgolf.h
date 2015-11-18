#ifndef CGOLF_H_
#define CGOLF_H_

class Golf
{
	private:
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:
		Golf();
		Golf & setGolf(Golf & g);
		void sethandicap(int hc);
		void showgolf() const;
};

#endif