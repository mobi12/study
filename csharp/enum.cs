using System;

namespace Example
{
    public enum TimeOfDay { Morning = 0, Afternoon = 1, Evening = 2 }

    class EnumExample
    {
        public static int Main(string[] args)
        {
            WriteGreeting(TimeOfDay.Morning);

            return 0;
        }

        static void WriteGreeting(TimeOfDay timeOfDay)
        {
            switch (timeOfDay)
            {
                case TimeOfDay.Morning:
                    Console.WriteLine("Good Morning");
                    Console.ReadKey();  break;
                case TimeOfDay.Afternoon:
                    Console.WriteLine("Good Afternoon");
                    Console.ReadKey();  break;
                case TimeOfDay.Evening:
                    Console.WriteLine("Good Evening");
                    Console.ReadKey();  break;
            }
        }
    }
}
