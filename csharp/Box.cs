using System;

namespace Test
{
    class test
    {
        public static int Main()
        {
            int target = 10;
            Object box = target;

            Console.WriteLine(box);

            int val = (int)box;
            Console.WriteLine(val);
            Console.ReadKey();

            return 0;
        }
    }
}