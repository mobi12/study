using System;

namespace Array
{
    class Obj
    {
        public static int Main()
        {
            int [,] Num = { { 1, 2, 3 }, { 1, 2, 3 } };

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 3; j++)
                    Console.WriteLine(Num[i, j]);
            }

            Console.ReadKey(); 
            return 0;
        }
    }
}