using System;

namespace NewCs
{
    class Person
    {
        public int age;
        public string gender;
        public string profession;
    }

    class Program
    {
        static int Main()
        {
            Person obj = new Person();

            obj.age = 15;
            obj.gender = "Man";
            obj.profession = "Joker";

            Console.WriteLine(obj.age);
            Console.WriteLine(obj.profession);
            Console.WriteLine(obj.gender);

            Console.ReadKey();
            return 0;
        }
    }
}