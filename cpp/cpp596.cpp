#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct car {
		string company;
		int year;
	};

	int answer = 0;
	cout << "请问有多少辆车?" << endl;
	cin >> answer;
	
	car *pn = new car[answer];

	cout << "输入每辆车的生产商和年份" << endl;
	for (int i = 0; i < answer; i++)
	{
		cout << "输入名字：";
		cin.get();
		getline(cin,pn[i].company);
		cout << "输入年份：";
		cin >> pn[i].year;
	}

	cout << "你一共有这" << answer << "辆车：" << endl;
	for (int j = 0; j < answer; j++)
	{
		cout << pn[j].year << " ";
		cout << pn[j].company << endl;
	}

	delete [] pn;
	return 0;
}
