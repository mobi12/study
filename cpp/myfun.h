namespace my
{
	//比较大小函数
	int getMax(int arr[0],int count,bool istrue)
	{
		int temp = arr[0];
		int i;
		for (i=0;i<count;i++)
		{
			if (istrue == true)
			{	
				if (temp < arr[i])
				{
					temp = arr[i];
				}
			}
			else
			{
				if (temp > arr[i])
				{
					temp = arr[i];
				}
			}
		}
	return temp;
	}

	//菜单函数
	void menu(void)
	{
		cout << "这是一个菜单\n"
			<< "有以下选项：" << "1)呵呵：无聊的作者无聊的功能\n"
			<< "2)我去：将我去写入文件\n"
			<< "3)我都不知道该干嘛，退了算了\n";
	}
}
