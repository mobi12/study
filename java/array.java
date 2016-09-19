public class array
{
	public static void main(String[] args)
	{
		int[] array = new int[5];
		
		for (int i = 0; i < 5; i++)
		{
			array[i] = i;
		}
		
		for (int j = 4; j > 0; j--)
		{
			System.out.println(array[j]);
		}
	}
}
