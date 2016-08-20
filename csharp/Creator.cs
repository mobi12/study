using System;

namespace Program
{
    class Creator
    {
        public int a;
        public int b;

        public Creator()
        {
            this.a = 15;
            this.b = 25;
        }

        public Creator(int one, int two)
        {
            this.a = one;
            this.b = two;
        }

        public int Add()
        {
            return a + b;
        }

        public int Add(int one, int two)
        {
            return one + two;
        }
    }

    class Pro
    {
        static int Main()
        {
            Creator one = new Creator();
            Creator two = new Creator(1, 2);

            int a = one.Add();
            int b = two.Add();
            int c = two.Add(5, 4);

            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);

            Console.ReadKey();
            return 0;
        }
    }
}