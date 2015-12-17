#ifndef STRING2_H_
#define STRING2_H_

const int CINLIM = 80;

class String
{
	private:
		char * str;
		int len;
		static int num_strings;
		static const int CINLIM = 80;
	public:
	//构造函数
		String(const char * s);
		String();
		String(const String &);
		~String();
		int length() const { return len; }
		void Stringlow();
		void Stringup();
		int has(char ch) const;
		//重载操作符
		String & operator =(const String &);
		String & operator =(const char *);
		char & operator [](int i);
		const char & operator [](int i) const;
		//友元函数
		friend const String & operator +(const String & st, const String & st2);
		friend bool operator <(const String & st, const String & st2);
		friend bool operator >(const String & st1, const String & st2);
		friend bool operator ==(const String & st, const String & st2);
		friend const String & operator +(const char * st, String & st2);
		friend std::ostream & operator <<(std::ostream & os, const String & st); 
		friend std::istream & operator >>(std::istream & is, String & st);
		//静态函数
		static int HowMany();
};

#endif