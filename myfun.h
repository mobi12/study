namespace my
{
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
}	
