#include <iostream>

using namespace std;

struct box 
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(box one);
float product(box * pone);

int main()
{
	box thing;

	cout << "输入名字：";
	cin.getline(thing.maker, 40);
	cout << "输入高：";
	cin >> thing.height;
	cout << "输入宽：";
	cin >> thing.width;
	cout << "输入长: ";
	cin >> thing.length;
	cout << "面积等于" << product(&thing) << endl;

	show_box(thing);

	return 0;
}

void show_box(box one)
{
	cout << "名字：" << one.maker << endl;
	cout << "长：" << one.length << endl;
	cout << "宽：" << one.width << endl;
	cout << "高：" << one.height << endl;	
}

float product(box * pone)
{
	box total;
	total.volume = pone->length * pone->width * pone->height;
	return total.volume;
}
