#ifndef BETE_H_
#define BETE_H_

class Plorg
{
	private:
		static const int Len = 19;
		char fullname[Len];
		int ci;
	public:
		Plorg();
		Plorg(const char *name, int ci_num = 50);
		void Ci(int ci_num);
		void show() const;
};

#endif