namespace my
{
	int getMax(int arr[0],int count,bool istrue)
	{
		int temp = arr[0];
		int i;
		if (istrue == true)
		{	
			for (i=0;i<count;i++)
			{
				if (temp < arr[i])
				{
					temp = arr[i];
				}
			}
		}
		else
		{
			for(i=0;i<count;i++)
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
