using System;

namespace Varriables
{
	class Program
	{
		static int Main()
		{
			int x;
			int y;
			string myFirstName;
			string test = "5";

			x = 7;
			y = x + 3;
			myFirstName = "Stack";
			var z = myFirstName + y.ToString();
			x = int.Parse (test);

			Console.WriteLine (z);
			Console.WriteLine (x);
			Console.ReadLine ();

			return 0;
		}
	}
}